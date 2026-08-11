/* Ghidra address: 01d3eed0 */
/* Ghidra symbol: FUN_01d3eed0 */


void FUN_01d3eed0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  undefined1 auStack_1c8 [32];
  char *local_1a8;
  undefined1 *local_1a0;
  longlong *local_198;
  undefined8 *local_190;
  int local_188;
  undefined2 local_182;
  longlong *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  char local_49;
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  undefined4 local_30;
  char local_2b;
  char local_2a;
  undefined1 local_29 [9];
  
  local_198 = param_1;
  local_190 = param_2;
  local_182 = FUN_01d03160(param_1);
  local_180 = local_198;
  iVar1 = FUN_01cfd2d0();
  local_188 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_2a = (**(code **)(*local_180 + 0x2d0))(local_180,local_188,local_48);
      if (local_2a == '\x04') {
        local_1a8 = &local_49;
        FUN_01d3ee30(auStack_1c8,local_182,&local_30,local_40);
        if (local_49 != '\0') {
          cVar3 = '\x04';
          local_178 = local_40;
          local_168 = local_190;
          do {
            cVar4 = '\x04';
            local_170 = local_178;
            local_160 = local_168;
            do {
              local_1a8 = &local_2b;
              local_1a0 = local_29;
              puVar2 = (undefined8 *)FUN_01cfde70(local_198,local_30,*local_170,&local_2a);
              *local_160 = *puVar2;
              local_160 = local_160 + 1;
              local_170 = local_170 + 1;
              cVar4 = cVar4 + -1;
            } while (cVar4 != '\0');
            local_168 = local_168 + 4;
            local_178 = local_178 + 4;
            cVar3 = cVar3 + -1;
          } while (cVar3 != '\0');
        }
      }
      local_188 = local_188 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

