/* Ghidra address: 004d29f0 */
/* Ghidra symbol: FUN_004d29f0 */


void FUN_004d29f0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  uVar1 = FUN_0041b800(local_20);
  FUN_004b1480(param_1,uVar1);
  if (local_20[0] != (longlong *)0x0) {
    (**(code **)(*local_20[0] + 0x28))(local_20[0],param_2);
  }
  pcVar2 = (code *)FUN_00411550(param_2,0xfff4);
  (*pcVar2)(param_2,param_1);
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_004d2b10(*(longlong *)(param_2 + 8),param_2);
  }
  (**(code **)(*param_1 + 0x60))(param_1,param_2,0,*(undefined8 *)(param_2 + 0x10));
  FUN_004d2880(param_1,param_2);
  FUN_004d43a0(param_2,1);
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
    FUN_004d4320(param_2,1,1);
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,0);
  FUN_0041b800(local_20);
  return;
}

