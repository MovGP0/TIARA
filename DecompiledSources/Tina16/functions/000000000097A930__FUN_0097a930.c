/* Ghidra address: 0097a930 */
/* Ghidra symbol: FUN_0097a930 */


undefined8 FUN_0097a930(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  
  if (param_3 < 5) {
    if (param_3 == 4) {
      FUN_00414b90(param_2,L"IDREFS");
      return param_2;
    }
    if (param_3 == 0) {
      FUN_00414b90(param_2,L"CDATA");
      return param_2;
    }
    if (param_3 == 1) {
      FUN_00414b90(param_2,L"NOTATION");
      return param_2;
    }
    if (param_3 == 2) {
      FUN_00414b90(param_2,&DAT_0097aa84);
      return param_2;
    }
    if (param_3 == 3) {
      FUN_00414b90(param_2,L"IDREF");
      return param_2;
    }
  }
  else {
    if (param_3 == 5) {
      FUN_00414b90(param_2,L"ENTITY");
      return param_2;
    }
    if (param_3 == 6) {
      FUN_00414b90(param_2,L"ENTITIES");
      return param_2;
    }
    if (param_3 == 7) {
      FUN_00414b90(param_2,L"NMTOKEN");
      return param_2;
    }
    if (param_3 == 8) {
      FUN_00414b90(param_2,L"NMTOKENS");
      return param_2;
    }
  }
  uVar1 = FUN_0044d490(&PTR_FUN_00436080,1,L"Datatype conversion not supported");
  FUN_004134c0(uVar1);
  return param_2;
}

