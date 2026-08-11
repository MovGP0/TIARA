/* Ghidra address: 01aad950 */
/* Ghidra symbol: FUN_01aad950 */


void FUN_01aad950(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  char cVar7;
  short local_56;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_48 = 0;
  local_50 = 0;
  cVar7 = *(char *)(param_1 + 0x198fa);
  if (cVar7 != '\0') {
    puVar6 = (undefined8 *)(param_1 + 0x198fc);
    do {
      uVar1 = *puVar6;
      local_40._0_2_ = (ushort)uVar1;
      local_40._2_1_ = (byte)((ulonglong)uVar1 >> 0x10);
      local_40._3_1_ = (char)((ulonglong)uVar1 >> 0x18);
      if (local_40._3_1_ == '\0') {
        uVar2 = (uint)(ushort)local_40;
        uVar3 = (uint)*(ushort *)
                       (*(longlong *)(param_1 + 0x10 + (longlong)(int)uVar2 * 8) + 0x4236 +
                       (longlong)(int)(uint)local_40._2_1_ * 2);
        uVar5 = **(uint **)(*(longlong *)(param_1 + 0x19c38) + -8 + (longlong)(int)uVar3 * 8);
        local_56 = (short)uVar5;
        local_40 = uVar1;
        if (local_56 == 0) {
          FUN_014f9670(*(undefined8 *)
                        (*(longlong *)(param_1 + 0x19c40) + -8 + (longlong)(int)uVar2 * 8),
                       CONCAT71((int7)(int3)(uint3)(byte)((ulonglong)uVar1 >> 8),1),&local_40);
          uVar1 = local_40;
        }
        else {
          iVar4 = 1;
          for (uVar5 = uVar5 & 0xffff; uVar1 = local_40, uVar5 != 0; uVar5 = uVar5 - 1) {
            FUN_014f9670(*(undefined8 *)
                          (*(longlong *)(param_1 + 0x19c40) + -8 +
                          (longlong)
                          (int)(uint)*(ushort *)
                                      (*(longlong *)
                                        (*(longlong *)(param_1 + 0x19c38) + -8 +
                                        (longlong)(int)uVar3 * 8) + -4 + (longlong)iVar4 * 6) * 8),0
                         ,&local_40);
            iVar4 = iVar4 + 1;
          }
        }
      }
      local_40 = uVar1;
      puVar6 = puVar6 + 1;
      cVar7 = cVar7 + -1;
    } while (cVar7 != '\0');
  }
  FUN_00414560(&local_50,2);
  return;
}

