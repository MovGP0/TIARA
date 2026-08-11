/* Ghidra address: 00978950 */
/* Ghidra symbol: FUN_00978950 */


void FUN_00978950(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined2 local_48;
  undefined2 local_46;
  int local_28;
  uint local_24;
  undefined8 local_20;
  
  local_60 = auStack_88;
  local_20 = 0;
  puVar1 = auStack_88;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    local_4c = 1;
    while( true ) {
      local_50 = 0;
      if (param_2 != 0) {
        local_50 = *(uint *)(param_2 + -4) >> 1;
      }
      puVar1 = local_60;
      if ((int)local_50 < (int)local_4c) break;
      lVar4 = (longlong)(int)local_4c;
      local_24 = (uint)*(ushort *)(param_2 + -2 + lVar4 * 2);
      if (local_24 - 0xd800 < 0x400) {
        local_54 = 0;
        if (param_2 != 0) {
          local_54 = *(uint *)(param_2 + -4) >> 1;
        }
        if (local_4c == local_54) {
          lVar4 = FUN_0044d490(&PTR_FUN_00471da0,CONCAT71((uint7)(uint3)(local_24 - 0xd800 >> 8),1),
                               PTR_u_Invalid_Character_01e32a68);
          FUN_004134c0();
        }
        local_46 = *(undefined2 *)(param_2 + -2 + lVar4 * 2);
        local_4c = local_4c + 1;
        local_48 = *(undefined2 *)(param_2 + -2 + (longlong)(int)local_4c * 2);
        cVar2 = FUN_008f7640(local_48);
        if (cVar2 == '\0') {
          uVar3 = FUN_0044d490(&PTR_FUN_00471da0,1,PTR_u_Invalid_Character_01e32a68);
          FUN_004134c0(uVar3);
        }
        local_24 = FUN_008f7600(local_46,local_48);
      }
      else if (local_24 - 0xdc00 < 0x400) {
        uVar3 = FUN_0044d490(&PTR_FUN_00471da0,CONCAT71((uint7)(uint3)(local_24 - 0xdc00 >> 8),1),
                             PTR_u_Invalid_Character_01e32a68);
        FUN_004134c0(uVar3);
      }
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x30))
                (*(longlong **)(param_1 + 0xa8),local_24,&local_28);
      if (local_24 == 9) {
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + 1;
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      }
      else if (local_24 == 10) {
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
        *(undefined4 *)(param_1 + 0x84) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
      else {
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      }
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + local_28;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      local_4c = local_4c + 1;
    }
  }
  local_60 = puVar1;
  FUN_00414520(&local_20);
  return;
}

