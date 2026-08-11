/* Ghidra address: 01994e80 */
/* Ghidra symbol: FUN_01994e80 */


void FUN_01994e80(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29 [9];
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0xc0))(param_2);
    if ((cVar1 != '\0') && ((undefined **)*param_2 == &PTR_FUN_01cf10a8)) {
      cVar1 = FUN_013ae260(param_2);
      if (cVar1 != '\0') {
        cVar1 = FUN_013ae1f0(param_2);
        if (cVar1 == '\0') {
          *(bool *)(param_2 + 0xac) = *(char *)(param_1 + 0x58) == '\0';
        }
        else {
          sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
          if ((sVar2 == 8) || (sVar2 == 0x62)) {
            uVar3 = 3;
          }
          else {
            uVar3 = 2;
          }
          uVar3 = FUN_01cfde70(param_2,uVar3,0,local_29,&local_2a,&local_2b);
          *(bool *)uVar3 = *(char *)(param_1 + 0x58) == '\0';
        }
      }
    }
  }
  return;
}

