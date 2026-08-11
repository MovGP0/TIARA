/* Ghidra address: 015b0710 */
/* Ghidra symbol: FUN_015b0710 */


void FUN_015b0710(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_1c;
  uint *local_18;
  uint *local_10;
  
  local_10 = (uint *)(*(longlong *)(param_1 + 0x68) +
                      (longlong)(int)(*(uint *)(param_1 + 0x48) >> 1) +
                     (longlong)(*(int *)(param_1 + 0x88) * 4 + 3) * 4);
  local_18 = param_2 + 3;
  if (1 < *(int *)(param_1 + 0x88)) {
    iVar5 = *(int *)(param_1 + 0x88) + -1;
    do {
      uVar1 = *local_18 ^ *local_10;
      uVar2 = param_2[2] ^ local_10[-1];
      uVar3 = param_2[1] ^ local_10[-2];
      uVar4 = *param_2 ^ local_10[-3];
      local_10 = local_10 + -4;
      *param_2 = *(uint *)(&DAT_01f6d5e4 + (longlong)(int)(uVar4 & 0xff) * 4) ^
                 *(uint *)(&DAT_01f6d9e4 + (longlong)(int)(uVar1 >> 8 & 0xff) * 4) ^
                 *(uint *)(&DAT_01f6dde4 + (longlong)(int)(uVar2 >> 0x10 & 0xff) * 4) ^
                 *(uint *)(&DAT_01f6e1e4 + (longlong)(int)(uVar3 >> 0x18) * 4);
      param_2[1] = *(uint *)(&DAT_01f6d5e4 + (longlong)(int)(uVar3 & 0xff) * 4) ^
                   *(uint *)(&DAT_01f6d9e4 + (longlong)(int)(uVar4 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_01f6dde4 + (longlong)(int)(uVar1 >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_01f6e1e4 + (longlong)(int)(uVar2 >> 0x18) * 4);
      param_2[2] = *(uint *)(&DAT_01f6d5e4 + (longlong)(int)(uVar2 & 0xff) * 4) ^
                   *(uint *)(&DAT_01f6d9e4 + (longlong)(int)(uVar3 >> 8 & 0xff) * 4) ^
                   *(uint *)(&DAT_01f6dde4 + (longlong)(int)(uVar4 >> 0x10 & 0xff) * 4) ^
                   *(uint *)(&DAT_01f6e1e4 + (longlong)(int)(uVar1 >> 0x18) * 4);
      *local_18 = *(uint *)(&DAT_01f6d5e4 + (longlong)(int)(uVar1 & 0xff) * 4) ^
                  *(uint *)(&DAT_01f6d9e4 + (longlong)(int)(uVar2 >> 8 & 0xff) * 4) ^
                  *(uint *)(&DAT_01f6dde4 + (longlong)(int)(uVar3 >> 0x10 & 0xff) * 4) ^
                  *(uint *)(&DAT_01f6e1e4 + (longlong)(int)(uVar4 >> 0x18) * 4);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar1 = *local_18 ^ *local_10;
  uVar2 = param_2[2] ^ local_10[-1];
  uVar3 = param_2[1] ^ local_10[-2];
  uVar4 = *param_2 ^ local_10[-3];
  local_10 = local_10 + -4;
  *param_2 = CONCAT13((&DAT_01f6c4e1)[(int)(uVar3 >> 0x18)],
                      CONCAT12((&DAT_01f6c4e1)[(int)(uVar2 >> 0x10 & 0xff)],
                               CONCAT11((&DAT_01f6c4e1)[(int)(uVar1 >> 8 & 0xff)],
                                        (&DAT_01f6c4e1)[(int)(uVar4 & 0xff)])));
  param_2[1] = CONCAT13((&DAT_01f6c4e1)[(int)(uVar2 >> 0x18)],
                        CONCAT12((&DAT_01f6c4e1)[(int)(uVar1 >> 0x10 & 0xff)],
                                 CONCAT11((&DAT_01f6c4e1)[(int)(uVar4 >> 8 & 0xff)],
                                          (&DAT_01f6c4e1)[(int)(uVar3 & 0xff)])));
  param_2[2] = CONCAT13((&DAT_01f6c4e1)[(int)(uVar1 >> 0x18)],
                        CONCAT12((&DAT_01f6c4e1)[(int)(uVar4 >> 0x10 & 0xff)],
                                 CONCAT11((&DAT_01f6c4e1)[(int)(uVar3 >> 8 & 0xff)],
                                          (&DAT_01f6c4e1)[(int)(uVar2 & 0xff)])));
  *local_18 = CONCAT13((&DAT_01f6c4e1)[(int)(uVar4 >> 0x18)],
                       CONCAT12((&DAT_01f6c4e1)[(int)(uVar3 >> 0x10 & 0xff)],
                                CONCAT11((&DAT_01f6c4e1)[(int)(uVar2 >> 8 & 0xff)],
                                         (&DAT_01f6c4e1)[(int)(uVar1 & 0xff)])));
  local_1c = 0;
  do {
    *local_18 = *local_18 ^ *local_10;
    local_10 = local_10 + -1;
    local_18 = local_18 + -1;
    local_1c = local_1c + 1;
  } while (local_1c != 4);
  return;
}

