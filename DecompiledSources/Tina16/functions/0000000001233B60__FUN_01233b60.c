/* Ghidra address: 01233b60 */
/* Ghidra symbol: FUN_01233b60 */


void FUN_01233b60(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1a [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x260))(*(longlong **)(param_1 + 0x8e8));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8f8),uVar5);
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x8e8) + 0x260))(*(longlong **)(param_1 + 0x8e8));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x900),cVar3 == '\0');
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x920),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x930),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x918),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x928),1);
  if (*(longlong *)PTR_DAT_02001830 != 0) {
    uVar6 = (**(code **)**(undefined8 **)PTR_DAT_02001830)(*(undefined8 **)PTR_DAT_02001830);
    FUN_00418590(uVar6,&DAT_01cf1390);
  }
  uVar6 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x55);
  *(undefined8 *)PTR_DAT_02001830 = uVar6;
  plVar1 = *(longlong **)PTR_DAT_02001830;
  FUN_017bf050(plVar1,0,&DAT_01233e98);
  uVar4 = (**(code **)(*plVar1 + 0x2c8))(plVar1);
  uVar6 = FUN_00409570(uVar4);
  *(undefined8 *)(*(longlong *)PTR_DAT_02001830 + 0xc0) = uVar6;
  (**(code **)(*plVar1 + 0x2d0))(plVar1,0,PTR_DAT_02005328);
  FUN_01d38290(*(undefined8 *)PTR_DAT_02001830,1);
  uVar6 = FUN_0172bd70(&PTR_FUN_01729478,1,*(undefined8 *)PTR_DAT_02001830,0,
                       *(undefined8 *)PTR_DAT_02001f18,0);
  *(undefined8 *)(param_1 + 0xa30) = uVar6;
  FUN_0172c930(uVar6,0,*(undefined8 *)(*(longlong *)(param_1 + 0x8f8) + 0x4f0),local_1a);
  lVar2 = *(longlong *)(param_1 + 0x8f8);
  plVar1 = *(longlong **)(lVar2 + 0x4f0);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_30,0);
  FUN_0064de00(lVar2,local_30[0]);
  (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x268))(*(longlong **)(param_1 + 0x8f8),0);
  FUN_0172c500(*(undefined8 *)(param_1 + 0xa30),
               *(undefined8 *)(*(longlong *)(param_1 + 0x9a8) + 0x4f0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xa30));
  lVar2 = *(longlong *)(param_1 + 0x9a8);
  plVar1 = *(longlong **)(lVar2 + 0x4f0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,0);
  FUN_0064de00(lVar2,local_38);
  (**(code **)(**(longlong **)(param_1 + 0x9a8) + 0x268))(*(longlong **)(param_1 + 0x9a8),0);
  if (*(longlong *)PTR_DAT_02002e48 == 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x8f8),&local_40);
    FUN_00414ad0(PTR_DAT_02002e48,local_40);
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x8f8),*(undefined8 *)PTR_DAT_02002e48);
  }
  FUN_00414480(&local_40);
  FUN_00414560(&local_38,2);
  return;
}

