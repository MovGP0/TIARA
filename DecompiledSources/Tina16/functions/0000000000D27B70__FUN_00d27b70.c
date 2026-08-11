/* Ghidra address: 00d27b70 */
/* Ghidra symbol: FUN_00d27b70 */


undefined8 FUN_00d27b70(undefined8 param_1,undefined8 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  byte *local_50;
  byte local_48;
  byte local_47 [7];
  undefined1 local_40;
  undefined1 local_3f [7];
  uint local_38;
  uint uStack_34;
  undefined8 local_30;
  
  local_30 = *param_2;
  FUN_00409a70((longlong)&local_30 + 4,&local_40,4);
  FUN_00409a70(&local_30,local_3f + 3,4);
  (**(code **)PTR_PTR_02003358)(&local_40,&local_40,2);
  cVar5 = '\b';
  local_58 = &DAT_01ec0210;
  local_50 = &local_48;
  do {
    bVar1 = FUN_00d27b20(auStack_78,*local_58,local_40);
    *local_50 = bVar1;
    cVar6 = '\a';
    puVar4 = local_3f;
    puVar3 = local_58;
    do {
      puVar3 = puVar3 + 1;
      bVar1 = FUN_00d27b20(auStack_78,*puVar3,*puVar4);
      *local_50 = *local_50 ^ bVar1;
      puVar4 = puVar4 + 1;
      cVar6 = cVar6 + -1;
    } while (cVar6 != '\0');
    local_50 = local_50 + 1;
    local_58 = local_58 + 8;
    cVar5 = cVar5 + -1;
  } while (cVar5 != '\0');
  local_38 = (uint)local_48;
  uStack_34 = 0;
  cVar5 = '\a';
  pbVar2 = local_47;
  do {
    uStack_34 = uStack_34 << 8 | local_38 >> 0x18;
    local_38 = local_38 << 8 ^ (uint)*pbVar2;
    pbVar2 = pbVar2 + 1;
    cVar5 = cVar5 + -1;
  } while (cVar5 != '\0');
  return CONCAT44(uStack_34,local_38);
}

