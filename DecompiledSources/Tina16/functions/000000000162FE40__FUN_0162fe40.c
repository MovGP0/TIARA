/* Ghidra address: 0162fe40 */
/* Ghidra symbol: FUN_0162fe40 */


void FUN_0162fe40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 char *param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_20 [16];
  
  lVar2 = FUN_01612bc0(param_3,param_4);
  cVar1 = *(char *)(lVar2 + 10);
  *param_5 = cVar1;
  if (cVar1 != '\0') {
    uVar3 = FUN_0161be50(lVar2,param_2,local_20,1);
    FUN_01614c70(uVar3);
  }
  return;
}

