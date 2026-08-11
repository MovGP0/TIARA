/* Ghidra address: 01a9a880 */
/* Ghidra symbol: FUN_01a9a880 */


void FUN_01a9a880(longlong *param_1,undefined4 *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  double local_40;
  
  if (*param_4 != '\0') {
    local_40 = (double)*(ushort *)(param_4 + 1) / 100.0;
    if (*(int *)(param_4 + 3) == -2) {
      FUN_01a9cba0(param_1,(int)param_1[0x11],1);
      FUN_01a9cf10(param_1,(int)param_1[0x11]);
    }
    if (*(int *)(param_4 + 3) != -2) {
      uVar2 = (**(code **)(*param_1 + 0xd8))(param_1,*(int *)(param_4 + 3));
      FUN_01a9cba0(param_1,uVar2,1);
      uVar2 = (**(code **)(*param_1 + 0xd8))(param_1,*(undefined4 *)(param_4 + 3));
      FUN_01a9cf10(param_1,uVar2);
    }
    cVar1 = *param_4;
    if (cVar1 == '\x01') {
      uVar2 = FUN_01a9a860(auStack_a8,0);
      uVar3 = FUN_01a9a860(auStack_a8,0);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_70 = FUN_01a9a790(&local_60,param_3);
      uVar2 = FUN_01a9a860(auStack_a8,0xfffffff8);
      uVar3 = FUN_01a9a860(auStack_a8,4);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_6c = FUN_01a9a790(&local_60,param_3);
      uVar2 = FUN_01a9a860(auStack_a8,0xfffffff8);
      uVar3 = FUN_01a9a860(auStack_a8,0xfffffffc);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_68 = FUN_01a9a790(&local_60,param_3);
      local_88 = 2;
      FUN_01a9d5b0(param_1,*param_2,param_2[1],&local_70);
    }
    else if (cVar1 == '\x02') {
      uVar2 = FUN_01a9a860(auStack_a8,0);
      uVar3 = FUN_01a9a860(auStack_a8,0xfffffffc);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_58 = FUN_01a9a790(&local_60,param_3);
      uVar2 = FUN_01a9a860(auStack_a8,0xfffffffe);
      uVar3 = FUN_01a9a860(auStack_a8,0xfffffffc);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_54 = FUN_01a9a790(&local_60,param_3);
      uVar2 = FUN_01a9a860(auStack_a8,0xfffffffe);
      uVar3 = FUN_01a9a860(auStack_a8,4);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_50 = FUN_01a9a790(&local_60,param_3);
      uVar2 = FUN_01a9a860(auStack_a8,0);
      uVar3 = FUN_01a9a860(auStack_a8,4);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_4c = FUN_01a9a790(&local_60,param_3);
      local_88 = 3;
      FUN_01a9d5b0(param_1,*param_2,param_2[1],&local_58);
    }
    else if (cVar1 == '\x03') {
      uVar2 = FUN_01a9a860(auStack_a8,0);
      uVar3 = FUN_01a9a860(auStack_a8,0);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_58 = FUN_01a9a790(&local_60,param_3);
      uVar2 = FUN_01a9a860(auStack_a8,0xfffffff8);
      uVar3 = FUN_01a9a860(auStack_a8,4);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_54 = FUN_01a9a790(&local_60,param_3);
      uVar2 = FUN_01a9a860(auStack_a8,0xfffffffd);
      uVar3 = FUN_01a9a860(auStack_a8,0);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_50 = FUN_01a9a790(&local_60,param_3);
      uVar2 = FUN_01a9a860(auStack_a8,0xfffffff8);
      uVar3 = FUN_01a9a860(auStack_a8,0xfffffffc);
      local_60 = FUN_00498310(uVar2,uVar3);
      local_4c = FUN_01a9a790(&local_60,param_3);
      local_88 = 3;
      FUN_01a9d5b0(param_1,*param_2,param_2[1],&local_58);
    }
  }
  return;
}

