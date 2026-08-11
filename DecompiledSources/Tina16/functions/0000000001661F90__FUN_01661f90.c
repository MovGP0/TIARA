/* Ghidra address: 01661f90 */
/* Ghidra symbol: FUN_01661f90 */


void FUN_01661f90(longlong param_1,uint param_2,uint param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined1 auStack_98 [36];
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined8 local_68 [8];
  
  uVar2 = (longlong)(int)(param_2 + param_3) / 2 & 0xffffffff;
  local_74 = param_2;
  local_70 = param_3;
  local_6c = param_2;
  do {
    while( true ) {
      uVar6 = (uint)uVar2;
      cVar1 = FUN_01661d70(auStack_98,local_6c,uVar2);
      if (cVar1 == '\0') break;
      local_6c = local_6c + 1;
    }
    while (cVar1 = FUN_01661d70(auStack_98,uVar2,param_3), cVar1 != '\0') {
      param_3 = param_3 - 1;
    }
    if ((int)local_6c <= (int)param_3) {
      if ((uVar6 == local_6c) || (uVar6 == param_3)) {
        uVar2 = (ulonglong)(uVar6 ^ local_6c ^ param_3);
      }
      puVar4 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x40) + 400) + (longlong)(int)local_6c * 0x40)
      ;
      puVar5 = local_68;
      for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x40) + 400) + (longlong)(int)param_3 * 0x40);
      puVar5 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x40) + 400) + (longlong)(int)local_6c * 0x40)
      ;
      for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = local_68;
      puVar5 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x40) + 400) + (longlong)(int)param_3 * 0x40);
      for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      local_6c = local_6c + 1;
      param_3 = param_3 - 1;
    }
  } while ((int)local_6c <= (int)param_3);
  if ((int)local_74 < (int)param_3) {
    FUN_01661f90(param_1,local_74,param_3);
  }
  if ((int)local_6c < (int)local_70) {
    FUN_01661f90(param_1,local_6c,local_70);
  }
  return;
}

