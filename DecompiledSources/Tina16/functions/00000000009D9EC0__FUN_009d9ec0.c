/* Ghidra address: 009d9ec0 */
/* Ghidra symbol: FUN_009d9ec0 */


undefined4 FUN_009d9ec0(longlong param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  int local_28 [2];
  undefined4 local_20;
  
  local_48 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  *param_3 = 0;
  uVar3 = FUN_0041b800(&local_30);
  uVar2 = FUN_009d9860(*(undefined8 *)(param_1 + 0x18),uVar3);
  FUN_0041d630(uVar2);
  uVar2 = (**(code **)(*local_30 + 0x20))(local_30,local_28);
  FUN_0041d630(uVar2);
  iVar1 = local_28[0];
  if (param_2 < local_28[0]) {
    uVar3 = FUN_0041b800(&local_38);
    uVar2 = FUN_009d9860(*(undefined8 *)(param_1 + 0x18),uVar3);
    FUN_0041d630(uVar2);
    FUN_0041b800(param_3);
    uVar2 = (**(code **)(*local_38 + 0x18))(local_38,param_2,param_3);
    FUN_0041d630(uVar2);
  }
  else {
    uVar3 = FUN_0041b800(&local_40);
    uVar2 = FUN_009d9ad0(*(undefined8 *)(param_1 + 0x18),uVar3);
    FUN_0041d630(uVar2);
    uVar2 = (**(code **)(*local_40 + 0x20))(local_40,local_28);
    FUN_0041d630(uVar2);
    if (param_2 < iVar1 + local_28[0]) {
      uVar3 = FUN_0041b800(&local_48);
      uVar2 = FUN_009d9ad0(*(undefined8 *)(param_1 + 0x18),uVar3);
      FUN_0041d630(uVar2);
      FUN_0041b800(param_3);
      uVar2 = (**(code **)(*local_48 + 0x18))(local_48,param_2 - iVar1,param_3);
      FUN_0041d630(uVar2);
    }
    else {
      FUN_0041b800(param_3);
    }
  }
  local_20 = 0;
  FUN_00417840(&local_48,&DAT_0086bef0,4);
  return local_20;
}

