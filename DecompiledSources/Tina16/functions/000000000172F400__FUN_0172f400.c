/* Ghidra address: 0172f400 */
/* Ghidra symbol: FUN_0172f400 */


void FUN_0172f400(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_36 [26];
  ushort local_1c;
  byte local_19 [9];
  
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  if (*(byte *)(param_2 + 0x33) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(param_2 + 0x33) & 0x1f)
            & 0x90U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    *(undefined1 *)(param_1 + 0xaf) = 1;
    FUN_0172a910(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_2 + 0x34));
    FUN_0172a920(*(undefined8 *)(param_1 + 0xa0),local_19,1);
    iVar1 = FUN_0172a950(*(undefined8 *)(param_1 + 0xa0));
    FUN_0172a910(*(undefined8 *)(param_1 + 0xa0),iVar1 + (uint)local_19[0] * 0x1b);
    FUN_0172a920(*(undefined8 *)(param_1 + 0xa0),&local_1c,2);
    uVar2 = (uint)local_1c;
    if (-1 < (int)(uVar2 - 1)) {
      do {
        FUN_0172a920(*(undefined8 *)(param_1 + 0xa0),local_36,0x1a);
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
        if (*(byte *)(param_1 + 0x9b) < 4) {
          *(char *)(param_1 + 0x9b) = *(char *)(param_1 + 0x9b) + '\x01';
          FUN_004169a0(&local_40,local_36);
          FUN_005b85d0(&local_48,&DAT_0172f65c,0x1e - (uint)local_36[0]);
          FUN_00416cd0(param_1 + 0x90,3,*(undefined8 *)(param_1 + 0x90),local_40,local_48);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x78))
                    (*(longlong **)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0x90));
          *(undefined1 *)(param_1 + 0x9b) = 1;
          FUN_004169a0(&local_50,local_36);
          FUN_005b85d0(&local_58,&DAT_0172f65c,0x1e - (uint)local_36[0]);
          FUN_00416ba0(param_1 + 0x90,local_50,local_58);
        }
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  FUN_00414560(&local_58,4);
  return;
}

