/* Ghidra address: 00c601d0 */
/* Ghidra symbol: FUN_00c601d0 */


undefined8 FUN_00c601d0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  ulonglong uVar5;
  int local_30;
  int local_2c;
  
  lVar1 = param_1[2];
  FUN_017956f0(lVar1);
  FUN_017954b0(lVar1,in_stack_00000028,in_stack_00000030,&local_2c,&local_30);
  if (*(char *)(*(longlong *)(param_1[2] + 0x990) + 0x328) != '\0') {
    local_2c = ((local_2c + 2) / 4) * 4;
    local_30 = ((local_30 + 2) / 4) * 4;
  }
  uVar5 = 0;
  plVar3 = (longlong *)
           FUN_017b3100(&PTR_FUN_017a83d8,1,local_2c,local_30,0,L"Arial",0x3ff0000000000000,0,0,
                        0x808000);
  cVar2 = (**(code **)(*plVar3 + 8))(plVar3,param_1[2]);
  if (cVar2 == '\0') {
    FUN_00410f20(plVar3);
  }
  else {
    FUN_004ae7e0(*(undefined8 *)(lVar1 + 0xd10),plVar3);
    uVar4 = FUN_00c5c220(&DAT_00c5bba8,1,*(undefined8 *)(lVar1 + 0xd10),plVar3,
                         uVar5 & 0xffffffffffffff00);
    FUN_00c5c790(*(undefined8 *)(lVar1 + 0xd50),uVar4);
    FUN_017afd00(plVar3,1);
  }
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}

