/* Ghidra address: 00a3d400 */
/* Ghidra symbol: FUN_00a3d400 */


char FUN_00a3d400(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00a34430(param_1,param_2,param_3,param_4);
  if ((cVar1 != '\0') && (param_4 == 9)) {
    uVar2 = FUN_00a32f80(**(undefined4 **)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    uVar2 = FUN_00a32f80(*(undefined4 *)(*(longlong *)(param_1 + 8) + 4));
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(*(longlong *)(param_1 + 8) + 8);
  }
  return cVar1;
}

