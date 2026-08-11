/* Ghidra address: 00d86ae0 */
/* Ghidra symbol: FUN_00d86ae0 */


void FUN_00d86ae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xd8);
  if (lVar1 == 0) {
    FUN_00d57cd0(param_3,&local_38,*(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xd4));
    FUN_00d57d20(param_3,&local_38,0x808080);
  }
  else {
    FUN_00d77b90(lVar1,&local_38);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x58) + 0xd8);
    (**(code **)(*plVar2 + 0xa8))(plVar2,param_3,&DAT_01ecf394);
  }
  return;
}

