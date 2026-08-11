/* Ghidra address: 016f1650 */
/* Ghidra symbol: FUN_016f1650 */


char FUN_016f1650(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,char param_6,char param_7,undefined1 param_8,longlong param_9,
                 undefined8 param_10,longlong param_11,undefined4 param_12,undefined8 param_13,
                 undefined8 param_14)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 *local_90 [2];
  undefined8 *local_80 [2];
  undefined1 *local_70 [2];
  char *local_60 [2];
  char *local_50;
  longlong *local_48;
  int local_3c [3];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  pcVar5 = (char *)FUN_004095c0(0x28);
  pcVar5[0x20] = '\x01';
  if (param_6 == '\0') {
    *pcVar5 = '\x01';
    *(undefined8 *)(pcVar5 + 0x18) = param_1;
    pcVar5[0x10] = '\0';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    local_48 = (longlong *)0x0;
    local_50 = pcVar5;
    FUN_00597e50(param_9 + 8,&local_50);
  }
  else {
    cVar2 = FUN_017c6ab0(local_res10,local_res18,local_res20,&param_5,local_3c,&local_48,pcVar5 + 1,
                         param_8,param_10,param_11,param_12,param_13,param_14);
    *pcVar5 = cVar2;
    if (cVar2 == '\0') {
      FUN_004095f0(pcVar5);
    }
    else {
      if (param_7 == '\0') {
        if (param_11 == 0) {
          *(longlong **)(pcVar5 + 0x18) = local_48;
          pcVar5[0x10] = '\0';
          pcVar5[0x11] = '\0';
          pcVar5[0x12] = '\0';
          pcVar5[0x13] = '\0';
          pcVar5[0x14] = '\0';
          pcVar5[0x15] = '\0';
          pcVar5[0x16] = '\0';
          pcVar5[0x17] = '\0';
        }
        else {
          *(undefined8 *)(pcVar5 + 0x18) =
               *(undefined8 *)(*(longlong *)(param_11 + -8 + (longlong)local_3c[0] * 8) + 0x128);
          *(undefined8 *)(pcVar5 + 0x10) =
               *(undefined8 *)(param_11 + -8 + (longlong)local_3c[0] * 8);
        }
      }
      else {
        *(longlong **)(pcVar5 + 0x18) = local_48;
        pcVar5[0x10] = '\0';
        pcVar5[0x11] = '\0';
        pcVar5[0x12] = '\0';
        pcVar5[0x13] = '\0';
        pcVar5[0x14] = '\0';
        pcVar5[0x15] = '\0';
        pcVar5[0x16] = '\0';
        pcVar5[0x17] = '\0';
      }
      local_60[0] = pcVar5;
      FUN_00597e50(param_9 + 8,local_60);
    }
  }
  cVar2 = *pcVar5;
  if (((((byte)(cVar2 - 1U) < 3) || (cVar2 == '\x05')) || (cVar2 == '\b')) || (cVar2 == '\v')) {
    *(undefined4 *)(pcVar5 + 4) = local_res10[0];
    *(undefined4 *)(pcVar5 + 8) = local_res18[0];
  }
  cVar2 = *pcVar5;
  if (param_6 != '\0') {
    if (local_48 != (longlong *)0x0) {
      sVar4 = (**(code **)(*local_48 + 0xf8))(local_48);
      if (((sVar4 == 0x3d) || (sVar4 = (**(code **)(*local_48 + 0xf8))(local_48), sVar4 == 0x65)) ||
         ((sVar4 = (**(code **)(*local_48 + 0xf8))(local_48), sVar4 == 100 ||
          (cVar3 = FUN_01b05ff0(local_48), cVar3 != '\0')))) {
        puVar6 = (undefined1 *)FUN_004095c0(0x28);
        sVar4 = (**(code **)(*local_48 + 0xf8))(local_48);
        if (((sVar4 == 0x3d) || (sVar4 = (**(code **)(*local_48 + 0xf8))(local_48), sVar4 == 0x65))
           || (cVar3 = FUN_01b05ff0(local_48), cVar3 != '\0')) {
          *puVar6 = 1;
        }
        else {
          *puVar6 = 5;
        }
        if (param_7 == '\0') {
          *(undefined8 *)(puVar6 + 0x18) =
               *(undefined8 *)(*(longlong *)(param_11 + -8 + (longlong)local_3c[0] * 8) + 0x128);
          *(undefined8 *)(puVar6 + 0x10) =
               *(undefined8 *)(param_11 + -8 + (longlong)local_3c[0] * 8);
        }
        else {
          *(longlong **)(puVar6 + 0x18) = local_48;
          *(undefined8 *)(puVar6 + 0x10) = 0;
        }
        *(undefined4 *)(puVar6 + 4) = local_res20[0];
        *(undefined4 *)(puVar6 + 8) = param_5;
        puVar6[0x20] = 1;
        local_70[0] = puVar6;
        FUN_00597e50(param_9 + 8,local_70);
      }
      sVar4 = (**(code **)(*local_48 + 0xf8))(local_48);
      if (sVar4 == 100) {
        puVar7 = (undefined8 *)FUN_004095c0(0x28);
        puVar8 = (undefined8 *)FUN_004095c0(0x28);
        uVar9 = *(uint *)(param_9 + 0x10) - 2;
        if (*(uint *)(param_9 + 0x10) <= uVar9) {
          FUN_00594f90();
        }
        puVar1 = *(undefined8 **)(*(longlong *)(param_9 + 8) + (longlong)(int)uVar9 * 8);
        *puVar7 = *puVar1;
        puVar7[1] = puVar1[1];
        puVar7[2] = puVar1[2];
        puVar7[3] = puVar1[3];
        puVar7[4] = puVar1[4];
        uVar9 = *(uint *)(param_9 + 0x10) - 1;
        if (*(uint *)(param_9 + 0x10) <= uVar9) {
          FUN_00594f90();
        }
        puVar1 = *(undefined8 **)(*(longlong *)(param_9 + 8) + (longlong)(int)uVar9 * 8);
        *puVar8 = *puVar1;
        puVar8[1] = puVar1[1];
        puVar8[2] = puVar1[2];
        puVar8[3] = puVar1[3];
        puVar8[4] = puVar1[4];
        local_80[0] = puVar7;
        FUN_00597e50(param_9 + 8,local_80);
        local_90[0] = puVar8;
        FUN_00597e50(param_9 + 8,local_90);
      }
      return cVar2;
    }
    return cVar2;
  }
  return cVar2;
}

