/* Ghidra address: 01b37ed0 */
/* Ghidra symbol: FUN_01b37ed0 */


void FUN_01b37ed0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_178 [264];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 *local_40 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_01b36eb0(param_2);
  iVar6 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      puVar3 = (undefined8 *)FUN_004aeac0(param_1,iVar4);
      FUN_00414b50(&local_48,*puVar3);
      FUN_00414b50(&local_50,puVar3[3]);
      FUN_00414b50(&local_58,puVar3[1]);
      local_40[0] = (undefined4 *)puVar3[10];
      if (local_40[0] != (undefined4 *)0x0) {
        FUN_01b36de0(1,&DAT_01b3832c,param_2);
        iVar5 = 0;
        if (local_50 != 0) {
          iVar5 = *(int *)(local_50 + -4);
        }
        if (iVar5 < 1) {
          FUN_01b36e50(1,local_58,param_2);
        }
        else {
          FUN_01b36e50(1,local_50,param_2);
        }
        FUN_01b36de0(1,L".PRT ",param_2);
        FUN_01b36e50(1,local_48,param_2);
        FUN_01b36dc0(1,param_2);
        FUN_01b36de0(1,&DAT_01b38358,param_2);
        FUN_01b36dc0(1,param_2);
        iVar5 = 0;
        do {
          FUN_0040e840(local_178,*local_40[0]);
          FUN_004169a0(&local_60,local_178);
          FUN_01b36ce0(local_40[0][1],&local_68);
          iVar2 = 0;
          if (local_60 != 0) {
            iVar2 = *(int *)(local_60 + -4);
          }
          if (iVar2 == 0) {
            FUN_01b36de0(1,L"     ",param_2);
          }
          if (iVar2 == 1) {
            FUN_01b36de0(1,L"    ",param_2);
          }
          if (iVar2 == 2) {
            FUN_01b36de0(1,&DAT_01b3839c,param_2);
          }
          if (iVar2 == 3) {
            FUN_01b36de0(1,&DAT_01b383b0,param_2);
          }
          if (iVar2 == 4) {
            FUN_01b36de0(1,&DAT_01b383c4,param_2);
          }
          FUN_01b36e50(1,local_60,param_2);
          FUN_01b36de0(1,&DAT_01b383c4,param_2);
          FUN_00416dc0(&local_70,*(undefined8 *)(local_40[0] + 4),2,5);
          iVar2 = FUN_00416db0(*(undefined8 *)(local_40[0] + 4),&PTR_DAT_01b383d4);
          if (iVar2 == 0) {
            FUN_01b36de0(1,&PTR_DAT_01b383d4,param_2);
          }
          else {
            FUN_01b36de0(1,&DAT_01b383e8,param_2);
            FUN_01b36e50(1,local_68,param_2);
          }
          FUN_01b36dc0(1,param_2);
          iVar5 = iVar5 + 1;
          cVar1 = FUN_01b37eb0(local_40);
        } while ((cVar1 != '\0') && (iVar5 != *(int *)((longlong)puVar3 + 0x34)));
        FUN_01b36de0(1,&DAT_01b383fc,param_2);
        FUN_01b36dc0(1,param_2);
        FUN_01b36de0(1,&DAT_01b383fc,param_2);
        FUN_01b36dc0(1,param_2);
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_01b36de0(1,&DAT_01b383fc,param_2);
  FUN_01b36dc0(1,param_2);
  FUN_01b36de0(1,&DAT_01b383fc,param_2);
  FUN_01b36dc0(1,param_2);
  FUN_01b36de0(1,&DAT_01b383fc,param_2);
  FUN_01b36dc0(1,param_2);
  FUN_01b36de0(0,L"Done",param_2);
  FUN_01b36dc0(0,param_2);
  FUN_00414560(&local_70,6);
  return;
}

