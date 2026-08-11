/* Ghidra address: 019c6f50 */
/* Ghidra symbol: FUN_019c6f50 */


int FUN_019c6f50(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int local_70;
  int local_6c;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong local_48;
  int local_3c [3];
  
  local_48 = 0;
  local_50 = 0;
  local_58 = (undefined8 *)0x0;
  local_60 = (undefined8 *)0x0;
  iVar2 = 0;
  FUN_00419260(&local_58,&DAT_0147b748,1,2);
  FUN_00419260(&local_60,&DAT_0147b748,1,2);
  FUN_019c1e50(&local_48,param_2);
  if (-1 < param_4) {
    param_4 = param_4 + 1;
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      FUN_019c1e50(&local_50,*puVar3);
      iVar4 = 0;
      if (local_48 != 0) {
        iVar4 = (int)*(undefined8 *)(local_48 + -8);
      }
      local_70 = 0;
      if (-1 < iVar4 + -2) {
        iVar4 = iVar4 + -1;
        do {
          *local_58 = *(undefined8 *)(local_48 + (longlong)local_70 * 8);
          local_58[1] = *(undefined8 *)(local_48 + (longlong)(local_70 + 1) * 8);
          iVar5 = 0;
          if (local_50 != 0) {
            iVar5 = (int)*(undefined8 *)(local_50 + -8);
          }
          local_6c = 0;
          if (-1 < iVar5 + -2) {
            iVar5 = iVar5 + -1;
            do {
              *local_60 = *(undefined8 *)(local_50 + (longlong)local_6c * 8);
              local_60[1] = *(undefined8 *)(local_50 + (longlong)(local_6c + 1) * 8);
              cVar1 = FUN_019c2130(local_58,local_60,local_3c);
              if ((cVar1 != '\0') && (iVar2 < local_3c[0])) {
                iVar2 = local_3c[0];
              }
              local_6c = local_6c + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          local_70 = local_70 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      puVar3 = puVar3 + 8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  FUN_00417840(&local_60,&DAT_0147b748,4);
  return iVar2;
}

