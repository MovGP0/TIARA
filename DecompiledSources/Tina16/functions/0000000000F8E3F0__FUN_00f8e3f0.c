/* Ghidra address: 00f8e3f0 */
/* Ghidra symbol: FUN_00f8e3f0 */


void FUN_00f8e3f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  lVar1 = _get_mcu_status(*(undefined8 *)(param_1 + 0x60));
  *(longlong *)(param_1 + 0x3468) = lVar1;
  uVar3 = FUN_00f81cf0(*(undefined8 *)(lVar1 + 0x1370));
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_28,0x898);
  FUN_00b8fd60(&local_30,uVar3,*PTR_DAT_02005310,0,1);
  FUN_00416cd0(local_20,3,local_28,&LAB_00f8e4f8,local_30);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x30),local_20[0]);
  FUN_00414560(&local_30,3);
  return;
}

