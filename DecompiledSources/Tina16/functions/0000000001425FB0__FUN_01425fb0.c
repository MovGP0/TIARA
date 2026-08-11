/* Ghidra address: 01425fb0 */
/* Ghidra symbol: FUN_01425fb0 */


void FUN_01425fb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong local_res20;
  int local_58;
  int local_54;
  int local_50;
  int local_40;
  
  uVar1 = *param_3;
  local_res20 = param_4;
  FUN_00419500(param_4);
  local_40 = (int)uVar1;
  cVar5 = (char)uVar1;
  FUN_016e9e20(param_1,CONCAT31((int3)(CONCAT22((short)((ulonglong)uVar1 >> 0x10),cVar5 * 3) >> 8),
                                (char)(cVar5 * 3) + (cVar5 + -1) * cVar5 * '\x02'));
  local_54 = 0;
  local_58 = 0;
  iVar4 = local_40;
  if (local_40 - 1U < 0x80000000) {
    do {
      FUN_016ebdd0(param_1,CONCAT31((int3)((uint)local_54 >> 8),(char)local_54 + '\x01'),
                   *(undefined1 *)(local_res20 + local_58 * 2),
                   *(undefined1 *)(local_res20 + (local_58 * 2 + 1)),1);
      local_54 = local_54 + 1;
      local_58 = local_58 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_58 = 0;
  iVar4 = local_40;
  if (-1 < local_40 + -1) {
    do {
      cVar5 = (char)local_58 + '\x01';
      uVar2 = CONCAT31((int3)((uint)local_58 >> 8),cVar5);
      uVar3 = (undefined3)((uint)local_54 >> 8);
      FUN_016ec970(param_1,CONCAT31(uVar3,(char)local_54 + '\x01'),
                   *(undefined1 *)(local_res20 + local_58 * 2),
                   *(undefined1 *)(local_res20 + (local_58 * 2 + 1)),cVar5);
      FUN_016ecbf0(param_1,CONCAT31(uVar3,(char)local_54 + '\x02'),uVar2,uVar2);
      local_54 = local_54 + 2;
      local_58 = local_58 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((1 < local_40) && (local_58 = 0, iVar4 = local_40, -1 < local_40 + -1)) {
    do {
      local_50 = 0;
      iVar6 = local_40;
      if (-1 < local_40 + -1) {
        do {
          if (local_58 != local_50) {
            cVar5 = (char)local_58 + '\x01';
            uVar3 = (undefined3)((uint)local_54 >> 8);
            FUN_016ec970(param_1,CONCAT31(uVar3,(char)local_54 + '\x01'),
                         *(undefined1 *)(local_res20 + local_50 * 2),
                         *(undefined1 *)(local_res20 + (local_50 * 2 + 1)),cVar5);
            FUN_016ecbf0(param_1,CONCAT31(uVar3,(char)local_54 + '\x02'),
                         CONCAT31((int3)((uint)local_50 >> 8),(char)local_50 + '\x01'),
                         CONCAT31((int3)((uint)local_58 >> 8),cVar5));
            local_54 = local_54 + 2;
          }
          local_50 = local_50 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      local_58 = local_58 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_58 = 0;
  if (-1 < local_40 + -1) {
    do {
      FUN_016ed320(param_1,CONCAT31((int3)((uint)local_58 >> 8),(char)local_58 + '\x01'),0,0,0);
      local_58 = local_58 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  FUN_00419430(&local_res20,&DAT_01425f80);
  return;
}

