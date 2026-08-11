/* Ghidra address: 00b3dac0 */
/* Ghidra symbol: FUN_00b3dac0 */


void FUN_00b3dac0(longlong param_1,undefined8 param_2,char param_3,ushort *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  byte bVar4;
  short sVar5;
  char cVar6;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_40[0] = 0;
  local_48 = 0;
  local_30 = 0;
  uVar3 = *param_4;
  if (uVar3 <= param_4[1]) {
    sVar5 = (param_4[1] - uVar3) + 1;
    do {
      FUN_004144d0(&local_30);
      bVar4 = (byte)param_4[2];
      if (bVar4 <= *(byte *)((longlong)param_4 + 5)) {
        cVar6 = (*(byte *)((longlong)param_4 + 5) - bVar4) + '\x01';
        do {
          if (param_3 == '\0') {
            FUN_004155b0(&local_30,&DAT_00b3dccc);
          }
          uVar2 = FUN_00b4fb40(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),uVar3,bVar4);
          FUN_00b4f780(uVar2,local_40);
          FUN_00415530(&local_48,local_40[0],0);
          FUN_004155b0(&local_30,local_48);
          if (param_3 == '\0') {
            FUN_004155b0(&local_30,&DAT_00b3dccc);
          }
          if (bVar4 < *(byte *)((longlong)param_4 + 5)) {
            if (param_3 == '\0') {
              FUN_004155b0(&local_30,&DAT_00b3dcdc);
            }
            else if (param_3 == '\x01') {
              FUN_004155b0(&local_30,&DAT_00b3dcec);
            }
          }
          bVar4 = bVar4 + 1;
          cVar6 = cVar6 + -1;
        } while (cVar6 != '\0');
      }
      FUN_004155b0(&local_30,&DAT_00b3dcfc);
      uVar2 = FUN_00414df0(&local_30);
      iVar1 = 0;
      if (local_30 != 0) {
        iVar1 = *(int *)(local_30 + -4);
      }
      FUN_004b89e0(param_2,uVar2,(longlong)iVar1);
      uVar3 = uVar3 + 1;
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
  }
  FUN_004144d0(&local_48);
  FUN_00414520(local_40);
  FUN_004144d0(&local_30);
  return;
}

