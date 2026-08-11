/* Ghidra address: 0064ccb0 */
/* Ghidra symbol: FUN_0064ccb0 */


void FUN_0064ccb0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_50 = auStack_78;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  puVar2 = auStack_78;
  if (*(longlong *)(param_1 + 0x108) != param_2) {
    lVar1 = *(longlong *)(param_1 + 0x108);
    puVar2 = auStack_78;
    if ((lVar1 != 0) && (puVar2 = auStack_78, *(longlong *)(lVar1 + 0x338) != 0)) {
      local_48 = *(undefined8 *)(lVar1 + 0x338);
      FUN_004aee50(local_48,param_1,0);
      FUN_004d2d90(*(undefined8 *)(param_1 + 0x108),param_1);
      puVar2 = local_50;
    }
    local_50 = puVar2;
    puVar2 = local_50;
    if (((param_2 != 0) && (param_2 != 0xffffffff)) && (*(longlong *)(param_2 + 0x338) != 0)) {
      FUN_004ae7e0(*(undefined8 *)(param_2 + 0x338),param_1);
      puVar2 = local_50;
    }
  }
  local_50 = puVar2;
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x400;
  if (param_2 != 0xffffffff) {
    pcVar3 = (code *)FUN_00411550(param_1,0xffe4);
    (*pcVar3)(param_1,param_2,&local_38);
  }
  local_40 = *(longlong *)(param_1 + 0x108);
  if (local_40 != param_2) {
    if (param_2 == 0xffffffff) {
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x108) = param_2;
      if (param_2 != 0) {
        pcVar3 = (code *)FUN_00411550(param_2,0xffc2);
        (*pcVar3)(param_2,param_1,&local_38);
        FUN_004d26c0(*(undefined8 *)(param_1 + 0x108),param_1);
      }
    }
    if (local_40 != 0) {
      pcVar3 = (code *)FUN_00411550(local_40,0xffbb);
      (*pcVar3)(local_40,param_1);
    }
  }
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xfffffbff;
  return;
}

