/* Ghidra address: 01c48a60 */
/* Ghidra symbol: FUN_01c48a60 */


void FUN_01c48a60(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_40 [2];
  int local_30;
  int local_2c;
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  if ((-1 < iVar2) && (0 < *(int *)(param_1 + 0x6f8))) {
    plVar1 = *(longlong **)(param_1 + 0x6e8);
    uVar3 = (**(code **)(*plVar1 + 0x260))(plVar1);
    (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_40,uVar3);
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6b0),0,*(undefined4 *)(param_1 + 0x6f8),local_40[0]);
  }
  if ((param_4 < *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x4c0)) || (param_3 != 0)) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
    FUN_00848990(*(longlong *)(param_1 + 0x6b0),
                 *(uint *)(*(longlong *)(param_1 + 0x6b0) + 0x4d4) | 0x400);
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))
              (*(longlong **)(param_1 + 0x6e8),0xffffffff);
  }
  else {
    FUN_0084e320(*(longlong *)(param_1 + 0x6b0),local_20,0,param_4);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4f0);
    uVar3 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x268))(*(longlong **)(param_1 + 0x6e8),uVar3);
    FUN_00848990(*(longlong *)(param_1 + 0x6b0),
                 *(uint *)(*(longlong *)(param_1 + 0x6b0) + 0x4d4) & 0xfffffbff);
    FUN_00849e90(*(undefined8 *)(param_1 + 0x6b0),&local_30,0,param_4);
    FUN_0064cb30(*(undefined8 *)(param_1 + 0x6e8),
                 *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x90) + local_30);
    FUN_0064cb90(*(undefined8 *)(param_1 + 0x6e8),
                 *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x94) + local_2c);
    iVar2 = FUN_004230a0(&local_30);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x6e8),iVar2 + 1);
    iVar2 = FUN_004230c0(&local_30);
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x6e8),iVar2 + 1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
  }
  *(int *)(param_1 + 0x6f8) = param_4;
  FUN_00414480(local_40);
  FUN_00414480(local_20);
  return;
}

