/* Ghidra address: 0060aa30 */
/* Ghidra symbol: FUN_0060aa30 */


undefined1 FUN_0060aa30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  short local_30 [7];
  undefined1 local_21;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_20 = FUN_004b6da0(param_2);
  lVar2 = (**(code **)*param_2)(param_2);
  lVar3 = FUN_004b6da0(param_2);
  if (lVar2 != lVar3) {
    iVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_30,0xe);
    if ((iVar1 != 0xe) || (local_30[0] != 0x4d42)) {
      local_21 = 0;
      goto LAB_0060aaa3;
    }
  }
  local_21 = 1;
LAB_0060aaa3:
  FUN_004b6dc0(param_2,local_20);
  return local_21;
}

