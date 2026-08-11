/* Ghidra address: 019ac000 */
/* Ghidra symbol: FUN_019ac000 */


undefined8 FUN_019ac000(undefined8 param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_0043ea00(local_40,param_2);
  FUN_00416dc0(local_30,local_40[0],1,param_3);
  cVar4 = 'o';
  iVar3 = 1;
  if (0 < param_3) {
    do {
      iVar2 = 0;
      if (param_2 != 0) {
        iVar2 = *(int *)(param_2 + -4);
      }
      if (iVar2 < iVar3) {
        bVar1 = 0x20;
      }
      else {
        bVar1 = (byte)*(undefined2 *)(param_2 + -2 + (longlong)iVar3 * 2);
      }
      cVar4 = cVar4 * '\x02' + (bVar1 ^ 0xd5) + (char)iVar3;
      FUN_0043fba0(&local_48,cVar4,2);
      FUN_00416ad0(param_1,local_48);
      iVar3 = iVar3 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return param_1;
}

