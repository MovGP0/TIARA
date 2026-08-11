/* Ghidra address: 01aa8d90 */
/* Ghidra symbol: FUN_01aa8d90 */


longlong FUN_01aa8d90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    *(undefined8 *)(lVar1 + 0x41e8) = 0;
    FUN_0040d200(lVar1 + 0x28,0x508,0);
    *(undefined4 *)(lVar1 + 0x28) = 0;
    iVar3 = 0x20;
    puVar2 = (undefined1 *)(lVar1 + 0x568);
    do {
      *puVar2 = 0;
      puVar2[0x20] = 0;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = 8;
    puVar2 = (undefined1 *)(lVar1 + 0x5a8);
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 0x788;
      iVar3 = iVar3 + -1;
      param_1 = lVar1;
    } while (iVar3 != 0);
  }
  return param_1;
}

