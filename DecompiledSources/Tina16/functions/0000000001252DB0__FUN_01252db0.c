/* Ghidra address: 01252db0 */
/* Ghidra symbol: FUN_01252db0 */


void FUN_01252db0(longlong *param_1,undefined4 param_2,char param_3,longlong *param_4,
                 longlong *param_5,char param_6)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  uVar3 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  uVar4 = FUN_01d30b30(&DAT_01d2e8e8,1,uVar3,1,0);
  if ((param_6 == '\0') && (param_3 != '\x13')) {
    (**(code **)(*param_5 + 0x108))(param_5,L"type",L"static");
  }
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar2 = FUN_01cf1c20(param_1,uVar4,param_2,param_3);
  FUN_01d31180(uVar4,sVar1 + 0x201,0x47,uVar2);
  FUN_01cf2fd0(param_1,uVar4,param_2,param_3);
  FUN_004b6dc0(uVar3,0);
  FUN_00c7ba40(uVar3,&local_30);
  (**(code **)(*param_4 + 0x128))(param_4,&local_48,local_30);
  (**(code **)(*param_5 + 0x98))(param_5,local_40,local_48);
  FUN_00410f20(uVar4);
  FUN_00410f20(uVar3);
  FUN_0041b800(&local_48);
  FUN_0041b800(local_40);
  FUN_00414480(&local_30);
  return;
}

