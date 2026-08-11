/* Ghidra address: 00d1c3c0 */
/* Ghidra symbol: FUN_00d1c3c0 */


void FUN_00d1c3c0(longlong *param_1)

{
  byte *pbVar1;
  char cVar2;
  short sVar3;
  byte bVar4;
  undefined1 *puVar5;
  ulonglong local_70;
  undefined1 local_61;
  undefined1 local_60;
  short local_5f;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58 [31];
  byte local_39 [9];
  
  local_39[0] = (**(code **)(*param_1 + 0x60))(*param_1);
  bVar4 = 0xff;
  do {
    local_39[0] = local_39[0] ^ bVar4;
    (**(code **)(*param_1 + 0x48))(param_1,local_39,1);
    bVar4 = bVar4 - 1;
  } while (bVar4 != 0xff);
  FUN_0040d200(&local_61,0x28,0);
  local_61 = 0x80;
  local_60 = 2;
  sVar3 = (**(code **)(*param_1 + 0x60))(*param_1);
  _local_5f = CONCAT13(3,CONCAT12(1,sVar3 << 8));
  local_5b = 5;
  local_5a = 7;
  local_59 = 0xb;
  local_70 = (ulonglong)(uint)((int)param_1[5] * 8);
  FUN_00409a70(&local_70,local_58,8);
  cVar2 = (**(code **)(*param_1 + 0x60))();
  bVar4 = 0;
  puVar5 = &local_61;
  do {
    (**(code **)(*param_1 + 0x48))(param_1,puVar5,1);
    pbVar1 = (byte *)((longlong)param_1 + (ulonglong)bVar4 + 0x134);
    *pbVar1 = *pbVar1 ^ *(byte *)(param_1 + 6);
    bVar4 = bVar4 + 1;
    puVar5 = puVar5 + 1;
    cVar2 = cVar2 + -1;
  } while (cVar2 != '\0');
  FUN_00d0d260(param_1,0);
  return;
}

