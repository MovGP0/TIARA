/* Ghidra address: 00ccef70 */
/* Ghidra symbol: FUN_00ccef70 */


void FUN_00ccef70(longlong *param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((char)param_1[0x36] != param_2) {
    if (param_2 == '\0') {
      cVar1 = FUN_00cb9a40(param_1);
      if (cVar1 != '\0') {
        if (param_1[0x38] == 0) {
          FUN_0041ddd0(local_20,PTR_PTR_02002cc0);
          uVar2 = FUN_0086dfd0(&PTR_FUN_00cca3a8,1,local_20[0]);
          FUN_004134c0(uVar2);
        }
        else {
          (**(code **)(*param_1 + 600))(param_1);
        }
      }
    }
    else {
      cVar1 = FUN_00cb9a40(param_1);
      if (cVar1 != '\0') {
        cVar1 = FUN_00879990(6,0);
        if (cVar1 != '\0') {
          FUN_00c8f050(param_1[0x2b],0xffff,0x1006,0);
          FUN_00c8f050(param_1[0x2b],0xffff,0x1005,0);
        }
      }
    }
    *(char *)(param_1 + 0x36) = param_2;
  }
  FUN_00414480(local_20);
  return;
}

