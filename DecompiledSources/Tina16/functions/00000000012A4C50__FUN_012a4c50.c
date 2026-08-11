/* Ghidra address: 012a4c50 */
/* Ghidra symbol: FUN_012a4c50 */


undefined8 FUN_012a4c50(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x30))((longlong *)param_1[1],uVar1);
  lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105a20);
  return *(undefined8 *)(lVar3 + 0x110);
}

