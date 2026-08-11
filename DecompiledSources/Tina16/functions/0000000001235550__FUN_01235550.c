/* Ghidra address: 01235550 */
/* Ghidra symbol: FUN_01235550 */


void FUN_01235550(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1a [2];
  
  local_38 = 0;
  local_30[0] = 0;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x9a8) + 0x260))(*(longlong **)(param_1 + 0x9a8));
  *(undefined4 *)PTR_DAT_02005148 = uVar3;
  if (*(int *)PTR_DAT_02005148 != -1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x9a8) + 0x4f0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_30,*(undefined4 *)PTR_DAT_02005148);
    FUN_00414ad0(PTR_DAT_02005a58,local_30[0]);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)PTR_DAT_02005a58);
    FUN_017bf050(*(undefined8 *)PTR_DAT_02001830,0,&DAT_01235718);
    FUN_01d38290(*(undefined8 *)PTR_DAT_02001830,1);
    uVar4 = FUN_0172bd70(&PTR_FUN_01729478,1,*(undefined8 *)PTR_DAT_02001830,0,
                         *(undefined8 *)PTR_DAT_02001f18,0);
    *(undefined8 *)(param_1 + 0xa30) = uVar4;
    FUN_0172c930(uVar4,*PTR_DAT_02005148,*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x4f0),
                 local_1a);
    FUN_00410f20(*(undefined8 *)(param_1 + 0xa30));
    lVar2 = *(longlong *)(param_1 + 0x8f8);
    plVar1 = *(longlong **)(lVar2 + 0x4f0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,0);
    FUN_0064de00(lVar2,local_38);
    (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x268))(*(longlong **)(param_1 + 0x8f8),0);
  }
  FUN_00414560(&local_38,2);
  return;
}

