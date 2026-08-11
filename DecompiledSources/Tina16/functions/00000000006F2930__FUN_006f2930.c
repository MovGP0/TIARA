/* Ghidra address: 006f2930 */
/* Ghidra symbol: FUN_006f2930 */


void FUN_006f2930(longlong param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 *local_70;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50 [12];
  undefined1 local_44 [60];
  
  local_70 = auStack_a8;
  iVar1 = *param_2;
  if (iVar1 == 0xf) {
    puVar2 = auStack_a8;
    if ((((*(char *)(param_1 + 0x478) != '\0') &&
         (cVar3 = FUN_006265e0(), puVar2 = local_70, cVar3 != '\0')) &&
        (local_60 = FUN_007f9b70(param_1,1), puVar2 = local_70, local_60 != 0)) &&
       ((cVar3 = FUN_0080fc30(*(undefined8 *)(local_60 + 0x688)), puVar2 = local_70, cVar3 != '\0'
        && (cVar3 = FUN_0080fc90(*(undefined8 *)(local_60 + 0x688),param_1), puVar2 = local_70,
           cVar3 != '\0')))) {
      local_58 = thunk_FUN_041804fe(*(undefined8 *)(param_1 + 0x540),local_50);
      FUN_006f2860(auStack_a8,local_58,local_44);
      thunk_FUN_0416269d(*(undefined8 *)(param_1 + 0x540),local_50);
      return;
    }
  }
  else {
    if (iVar1 == 0x82) {
      local_88 = *(undefined8 *)(param_2 + 4);
      local_70 = auStack_a8;
      uVar4 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x530),*(undefined8 *)(param_1 + 0x540),
                                 0x82,*(undefined8 *)(param_2 + 2));
      *(undefined8 *)(param_2 + 6) = uVar4;
      *(undefined8 *)(param_1 + 0x540) = 0;
      *(undefined8 *)(param_1 + 0x530) = 0;
      return;
    }
    if (iVar1 == 0x84) {
      puVar2 = auStack_a8;
      if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
        param_2[6] = -1;
        param_2[7] = -1;
        return;
      }
    }
    else {
      puVar2 = auStack_a8;
      if ((iVar1 == 0x215) && (puVar2 = auStack_a8, *(char *)(param_1 + 0x5a1) != '\0')) {
        local_70 = auStack_a8;
        FUN_006f2620(auStack_a8);
        puVar2 = local_70;
      }
    }
  }
  local_70 = puVar2;
  local_88 = *(undefined8 *)(param_2 + 4);
  uVar4 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x530),*(undefined8 *)(param_1 + 0x540),
                             *param_2,*(undefined8 *)(param_2 + 2));
  *(undefined8 *)(param_2 + 6) = uVar4;
  return;
}

