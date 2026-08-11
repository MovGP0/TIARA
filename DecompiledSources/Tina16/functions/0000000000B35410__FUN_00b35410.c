/* Ghidra address: 00b35410 */
/* Ghidra symbol: FUN_00b35410 */


void FUN_00b35410(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  iVar2 = FUN_00416420(local_res10[0],0);
  if (iVar2 == 0) {
    lVar3 = (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48));
    FUN_004b6e40(*(undefined8 *)(param_1 + 0x48),lVar3 + 4);
    FUN_00b25810(*(undefined8 *)(param_1 + 0x48),1);
    FUN_00b25810(*(undefined8 *)(param_1 + 0x48),0);
    FUN_00b25840(*(undefined8 *)(param_1 + 0x48),0);
  }
  else {
    uVar5 = 0;
    if (local_res10[0] != 0) {
      uVar5 = *(uint *)(local_res10[0] + -4) >> 1;
    }
    lVar3 = (**(code **)**(undefined8 **)(param_1 + 0x48))(*(undefined8 **)(param_1 + 0x48));
    uVar1 = (uVar5 & 0xffff) * 2;
    FUN_004b6e40(*(undefined8 *)(param_1 + 0x48),lVar3 + 3 + (ulonglong)uVar1);
    FUN_00b25840(*(undefined8 *)(param_1 + 0x48),uVar5);
    FUN_00b25810(*(undefined8 *)(param_1 + 0x48),1);
    uVar4 = FUN_00415f70(local_res10[0]);
    FUN_00b258a0(*(undefined8 *)(param_1 + 0x48),uVar4,uVar1);
  }
  FUN_00414520(local_res10);
  return;
}

