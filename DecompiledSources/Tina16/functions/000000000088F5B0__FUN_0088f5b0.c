/* Ghidra address: 0088f5b0 */
/* Ghidra symbol: FUN_0088f5b0 */


longlong FUN_0088f5b0(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined2 *puVar2;
  
  lVar1 = FUN_0088f420(0x30);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    puVar2 = (undefined2 *)FUN_0088f420(0x10);
    if (puVar2 == (undefined2 *)0x0) {
      FUN_0088f480(lVar1);
      lVar1 = 0;
    }
    else {
      *puVar2 = 2;
      puVar2[1] = param_3;
      *(undefined4 *)(puVar2 + 2) = param_4;
      *(undefined4 *)(lVar1 + 4) = 2;
      *(undefined4 *)(lVar1 + 8) = param_1;
      *(undefined4 *)(lVar1 + 0xc) = param_2;
      *(undefined8 *)(lVar1 + 0x10) = 0x10;
      *(undefined2 **)(lVar1 + 0x20) = puVar2;
    }
  }
  return lVar1;
}

