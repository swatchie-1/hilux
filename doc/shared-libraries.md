Shared Libraries
================

## hiluxconsensus

The purpose of this library is to make the verification functionality that is critical to Hilux's consensus available to other applications, e.g. to language bindings.

### API

The interface is defined in the C header `hiluxconsensus.h` located in  `src/script/hiluxconsensus.h`.

#### Version

`hiluxconsensus_version` returns an `unsigned int` with the the API version *(currently at an experimental `0`)*.

#### Script Validation

`hiluxconsensus_verify_script` returns an `int` with the status of the verification. It will be `1` if the input script correctly spends the previous output `scriptPubKey`.

##### Parameters
- `const unsigned char *scriptPubKey` - The previous output script that encumbers spending.
- `unsigned int scriptPubKeyLen` - The number of bytes for the `scriptPubKey`.
- `const unsigned char *txTo` - The transaction with the input that is spending the previous output.
- `unsigned int txToLen` - The number of bytes for the `txTo`.
- `unsigned int nIn` - The index of the input in `txTo` that spends the `scriptPubKey`.
- `unsigned int flags` - The script validation flags *(see below)*.
- `hiluxconsensus_error* err` - Will have the error/success code for the operation *(see below)*.

##### Script Flags
- `hiluxconsensus_SCRIPT_FLAGS_VERIFY_NONE`
- `hiluxconsensus_SCRIPT_FLAGS_VERIFY_P2SH` - Evaluate P2SH ([BIP16](https://github.com/hilux/bips/blob/master/bip-0016.mediawiki)) subscripts
- `hiluxconsensus_SCRIPT_FLAGS_VERIFY_DERSIG` - Enforce strict DER ([BIP66](https://github.com/hilux/bips/blob/master/bip-0066.mediawiki)) compliance

##### Errors
- `hiluxconsensus_ERR_OK` - No errors with input parameters *(see the return value of `hiluxconsensus_verify_script` for the verification status)*
- `hiluxconsensus_ERR_TX_INDEX` - An invalid index for `txTo`
- `hiluxconsensus_ERR_TX_SIZE_MISMATCH` - `txToLen` did not match with the size of `txTo`
- `hiluxconsensus_ERR_DESERIALIZE` - An error deserializing `txTo`

### Example Implementations
- [NHilux](https://github.com/NicolasDorier/NHilux/blob/master/NHilux/Script.cs#L814) (.NET Bindings)
- [node-libhiluxconsensus](https://github.com/bitpay/node-libhiluxconsensus) (Node.js Bindings)
- [java-libhiluxconsensus](https://github.com/dexX7/java-libhiluxconsensus) (Java Bindings)
- [hiluxconsensus-php](https://github.com/Bit-Wasp/hiluxconsensus-php) (PHP Bindings)
