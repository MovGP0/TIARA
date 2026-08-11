/* Ghidra address: 01b3c180 */
/* Ghidra symbol: FUN_01b3c180 */


void FUN_01b3c180(undefined8 param_1,longlong *param_2,undefined8 param_3,ushort param_4,
                 undefined8 *param_5,longlong *param_6,undefined8 param_7,int param_8)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_res18 [2];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  local_38 = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_7);
  FUN_01b3b450(local_30,param_7);
  FUN_00414ad0(param_5,local_30[0]);
  *(int *)((longlong)param_5 + 0x34) = param_8;
  FUN_00419260(param_6,&DAT_004066f0,1,(longlong)param_8);
  sVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (((sVar1 == 0x7d) || (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 == 0x7e)) ||
     (sVar1 = (**(code **)(*param_2 + 0xf8))(param_2), sVar1 == 0x80)) {
    iVar2 = FUN_01cfd2d0(param_2);
    uVar4 = FUN_01cfde70(param_2,iVar2 + -1,0,&local_19,&local_1a,&local_1b);
    FUN_004169a0(param_5 + 1,uVar4);
  }
  else {
    FUN_00414ad0(param_5 + 1,*param_5);
  }
  FUN_00414ad0(param_5 + 2,L"SWITCH");
  *(uint *)(param_5 + 7) = (uint)param_4;
  FUN_01d04330(param_2,&local_38);
  FUN_00414ad0(param_5 + 3,local_38);
  iVar5 = 0;
  iVar2 = param_8;
  if (-1 < param_8 + -1) {
    do {
      uVar3 = FUN_01b3b5a0(param_1,param_2,local_res18[0],iVar5);
      *(undefined4 *)(*param_6 + (longlong)iVar5 * 4) = uVar3;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_38,2);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414480(&param_7);
  return;
}

