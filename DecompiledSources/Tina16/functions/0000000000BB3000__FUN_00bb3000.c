/* Ghidra address: 00bb3000 */
/* Ghidra symbol: FUN_00bb3000 */


longlong * FUN_00bb3000(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_30 = (longlong *)0x0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  FUN_0041b800(param_2);
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 != '\0') {
    iVar4 = 0;
    while (*param_2 == 0) {
      FUN_00baec70(param_1,&local_30);
      iVar2 = (**(code **)(*local_30 + 0x18))(local_30);
      if (iVar2 <= iVar4) break;
      FUN_00baec70(param_1,&local_28);
      (**(code **)(*local_28 + 0x20))(local_28,&local_20,iVar4);
      uVar3 = FUN_0041b800(param_2);
      cVar1 = FUN_00452340(local_20,&DAT_00bb3114,uVar3);
      if (cVar1 == '\0') {
        iVar4 = iVar4 + 1;
      }
    }
  }
  FUN_00417840(&local_30,&DAT_00b9f960,2);
  FUN_0041b800(&local_20);
  return param_2;
}

