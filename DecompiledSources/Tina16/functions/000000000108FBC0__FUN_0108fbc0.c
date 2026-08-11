/* Ghidra address: 0108fbc0 */
/* Ghidra symbol: FUN_0108fbc0 */


void FUN_0108fbc0(longlong *param_1,undefined8 param_2,int param_3,undefined1 *param_4,
                 undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  
  if (*(char *)((longlong)param_1 + 0xb52) == '\0') {
    if ((((param_3 == *(int *)((longlong)param_1 + 0x4c94)) &&
         (cVar1 = FUN_0108fab0(auStack_48,param_1[0x996]), cVar1 != '\0')) &&
        (*(int *)((longlong)param_1 + 0x4c9c) != 0)) &&
       (cVar1 = (**(code **)(*param_1 + 0x330))(param_1), cVar1 == '\0')) {
      *param_4 = 1;
      *param_6 = 0xff8080;
      return;
    }
    cVar1 = FUN_01089230(param_1,param_3,&local_20);
    if (cVar1 != '\0') {
      cVar1 = FUN_010ae5f0(local_20);
      if (cVar1 == '\0') {
        uVar2 = 0x9f9f;
      }
      else {
        uVar2 = 0xff;
      }
      *param_4 = 1;
      *param_6 = uVar2;
    }
  }
  return;
}

