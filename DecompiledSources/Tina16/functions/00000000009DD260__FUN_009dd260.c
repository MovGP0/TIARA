/* Ghidra address: 009dd260 */
/* Ghidra symbol: FUN_009dd260 */


undefined4 FUN_009dd260(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_2 = 0;
  lVar2 = FUN_009dab20(param_1);
  cVar1 = *(char *)(lVar2 + 200);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_2,&DAT_009dd338);
  }
  else if (cVar1 == '\x01') {
    FUN_00414ad0(param_2,&LAB_009dd34c);
  }
  else if (cVar1 == '\x02') {
    FUN_00414480(param_2);
  }
  return 0;
}

