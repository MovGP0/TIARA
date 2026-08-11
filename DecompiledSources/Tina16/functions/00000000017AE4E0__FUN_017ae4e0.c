/* Ghidra address: 017ae4e0 */
/* Ghidra symbol: FUN_017ae4e0 */


undefined8 FUN_017ae4e0(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 0x1d) == '\0') {
    iVar2 = 1;
  }
  else {
    iVar2 = -1;
  }
  cVar1 = *(char *)(param_1 + 0x1c);
  local_10 = (int)*param_2;
  uStack_c = (int)((ulonglong)*param_2 >> 0x20);
  if (cVar1 == '\0') {
    param_3 = iVar2 * local_10;
    param_4 = uStack_c;
  }
  else if (cVar1 == '\x01') {
    param_3 = -uStack_c;
    param_4 = iVar2 * local_10;
  }
  else if (cVar1 == '\x02') {
    param_3 = -iVar2 * local_10;
    param_4 = -uStack_c;
  }
  else if (cVar1 == '\x03') {
    param_4 = -iVar2 * local_10;
    param_3 = uStack_c;
  }
  return CONCAT44(param_4,param_3);
}

