/* Ghidra address: 00efa1d0 */
/* Ghidra symbol: FUN_00efa1d0 */


void FUN_00efa1d0(longlong *param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  if (*param_1 == 0) {
    lVar2 = FUN_004095c0(0x18);
    *param_1 = lVar2;
    if (*param_1 == 0) {
      FUN_00ef4260(1,param_4);
      return;
    }
    pbVar3 = (byte *)*param_1;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    lVar2 = FUN_004095c0(0x18);
    *(longlong *)(pbVar3 + 0x10) = lVar2;
    if (lVar2 == 0) {
      FUN_00ef4260(1,param_4);
      return;
    }
    puVar1 = *(undefined1 **)(pbVar3 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *puVar1 = 0xff;
    *(undefined8 *)(puVar1 + 8) = 0;
  }
  else {
    pbVar3 = (byte *)*param_1;
    for (pbVar4 = *(byte **)((byte *)*param_1 + 0x10);
        (*pbVar4 <= param_3 && (pbVar4 != (byte *)0x0)); pbVar4 = *(byte **)(pbVar4 + 0x10)) {
      pbVar3 = pbVar4;
    }
    if (param_3 < *pbVar3) {
      lVar2 = FUN_004095c0(0x18);
      *param_1 = lVar2;
      if (*param_1 == 0) {
        FUN_00ef4260(1,param_4);
        *param_1 = (longlong)pbVar3;
        return;
      }
      *(byte **)(*param_1 + 0x10) = pbVar3;
      pbVar3 = (byte *)*param_1;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
    else if (*pbVar3 < param_3) {
      lVar2 = FUN_004095c0(0x18);
      *(longlong *)(pbVar3 + 0x10) = lVar2;
      if (lVar2 == 0) {
        FUN_00ef4260(1,param_4);
        *(byte **)(pbVar3 + 0x10) = pbVar4;
        return;
      }
      pbVar3 = *(byte **)(pbVar3 + 0x10);
      *(byte **)(pbVar3 + 0x10) = pbVar4;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
  }
  *pbVar3 = param_3;
  FUN_00ef8230(pbVar3 + 8,local_res10,param_4);
  return;
}

