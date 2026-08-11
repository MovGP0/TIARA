/* Ghidra address: 01055a50 */
/* Ghidra symbol: FUN_01055a50 */


void FUN_01055a50(longlong *param_1,undefined8 param_2,longlong *param_3,undefined1 *param_4,
                 double param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *local_res8;
  undefined8 local_res10 [3];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = (longlong *)0x0;
  local_30 = 0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_res8 = param_1;
  local_res10[0] = param_2;
  FUN_0041b910(param_1);
  FUN_00414610(local_res10[0]);
  (**(code **)(*local_res8 + 0x100))(local_res8,&local_78);
  (**(code **)(*local_78 + 0xd8))(local_78,&local_70,L"/boards");
  FUN_0041b890(&local_40,local_70,&DAT_01055e68);
  (**(code **)(*local_40 + 0xe8))(local_40,&local_48,L"board");
  (**(code **)(*local_48 + 0x68))(local_48);
  iVar4 = 0;
  iVar3 = 0;
  (**(code **)(*local_48 + 0x70))(local_48,&local_80);
  FUN_0041b890(&local_38,local_80,&DAT_01055e68);
  FUN_00419430(param_3,&DAT_00e02168);
  iVar1 = FUN_0040c770(param_5 / 1000000.0);
  *param_4 = 0;
  while (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x100))(local_38,&local_68,L"name");
    (**(code **)(*local_38 + 0x100))(local_38,&local_58,L"arch");
    (**(code **)(*local_38 + 0x100))(local_38,&local_60,&DAT_01055ecc);
    (**(code **)(*local_38 + 0x100))(local_38,&local_88,L"f_cpu");
    FUN_00b8f030(local_88);
    iVar2 = FUN_0040c770();
    if ((iVar1 != -1) && (iVar2 == iVar1)) {
      *param_4 = 1;
    }
    iVar2 = FUN_00416db0(local_60,local_res10[0]);
    if (iVar2 == 0) {
      FUN_00419260(param_3,&DAT_00e02168,1,(longlong)(iVar3 + 1));
      *(int *)(*param_3 + (longlong)iVar3 * 4) = iVar4;
      iVar3 = iVar3 + 1;
    }
    (**(code **)(*local_48 + 0x70))(local_48,&local_90);
    FUN_0041b890(&local_38,local_90,&DAT_01055e68);
    iVar4 = iVar4 + 1;
  }
  FUN_0041b800(&local_90);
  FUN_00414480(&local_88);
  FUN_0041b800(&local_80);
  FUN_0041b800(&local_78);
  FUN_0041b800(&local_70);
  FUN_00414560(&local_68,4);
  FUN_0041b800(&local_48);
  FUN_00417840(&local_40,&LAB_00b9fca0,3);
  FUN_0041b800(&local_res8);
  FUN_00414480(local_res10);
  return;
}

