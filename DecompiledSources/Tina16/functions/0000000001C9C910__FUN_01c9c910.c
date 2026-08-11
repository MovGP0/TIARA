/* Ghidra address: 01c9c910 */
/* Ghidra symbol: FUN_01c9c910 */


void FUN_01c9c910(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *local_38;
  undefined8 local_30 [2];
  undefined4 local_20;
  uint local_1c;
  
  local_30[0] = 0;
  plVar3 = (longlong *)FUN_0149d160(0,&PTR_FUN_0149cf30);
  FUN_0149ec30(plVar3,param_2);
  lVar1 = plVar3[5];
  *(char *)(lVar1 + 0x98) = param_4;
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x90) + 0x80);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
  if (param_4 == '\x02') {
    FUN_005fc860(*(undefined8 *)(*(longlong *)(plVar3[5] + 0x90) + 0x80),FUN_00808000);
  }
  FUN_0041ddd0(local_30,PTR_DAT_020056b8);
  local_38 = plVar3;
  uVar4 = FUN_017baf50(&local_38,0);
  FUN_017bb430(&PTR_FUN_017ba4c0,1,local_30[0],param_1[0x4f5],uVar4);
  (**(code **)(*(longlong *)param_1[0x4f5] + 0x20))((longlong *)param_1[0x4f5],plVar3);
  FUN_0199e310(param_1[0x4f5],0,1,0);
  FUN_01994230(param_1[0x4f5]);
  uVar5 = FUN_0198d430(param_1[0x4f5]);
  FUN_01a9a4e0(uVar5,&local_1c,&local_20);
  uVar5 = FUN_0198d430(param_1[0x4f5]);
  (**(code **)(*plVar3 + 0xe8))(plVar3,uVar5,local_1c,local_20);
  FUN_01993f30(param_1[0x4f5],plVar3,1,0);
  uVar5 = FUN_0198d430(param_1[0x4f5]);
  (**(code **)(*plVar3 + 0xa0))(plVar3,uVar5);
  (**(code **)(*param_1 + 0x2f8))(param_1,local_1c,local_20,0,uVar4 & 0xffffffffffffff00,0);
  FUN_01c6d670(param_1,param_1[0x177]);
  FUN_00414480(local_30);
  return;
}

