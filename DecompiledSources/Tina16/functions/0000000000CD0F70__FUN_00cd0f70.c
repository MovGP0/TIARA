/* Ghidra address: 00cd0f70 */
/* Ghidra symbol: FUN_00cd0f70 */


void FUN_00cd0f70(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (((lVar1 != 0) && (*(char *)(lVar1 + 0x50) != '\0')) && (*(longlong *)(lVar1 + 0x48) != 0)) {
      FUN_00ca5480(*(undefined8 *)(lVar1 + 0x48),0);
    }
    (**(code **)PTR_DAT_020042a8)(*(undefined8 *)(param_1 + 0x18));
    (**(code **)PTR_DAT_020034f0)(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_00410f20(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_00410f20(uVar2);
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

