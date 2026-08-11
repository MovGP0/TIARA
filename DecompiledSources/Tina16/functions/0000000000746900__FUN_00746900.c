/* Ghidra address: 00746900 */
/* Ghidra symbol: FUN_00746900 */


void FUN_00746900(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_004b2680(param_1,param_2,param_3);
  if (param_3 == '\x02') {
    lVar3 = FUN_00746480(param_1);
    if ((*(ushort *)(lVar3 + 0x34) & 8) == 0) {
      lVar3 = FUN_00746480(param_1);
      if ((*(ushort *)(lVar3 + 0x34) & 0x40) == 0) {
        uVar4 = FUN_00746480(param_1);
        uVar2 = FUN_004b1870(param_2);
        cVar1 = FUN_00745330(uVar4,uVar2);
        if (cVar1 == '\0') {
          lVar3 = FUN_00746480(param_1);
          if ((*(ushort *)(lVar3 + 0x34) & 2) == 0) {
            FUN_0041ddd0(local_20,PTR_PTR_02003538);
            uVar4 = FUN_0044d490(&PTR_FUN_00737098,1,local_20[0]);
            FUN_004134c0(uVar4);
            goto code_r0x007469f4;
          }
        }
        uVar4 = FUN_00746480(param_1);
        uVar2 = FUN_004b1870(param_2);
        FUN_00745e70(uVar4,uVar2);
      }
    }
  }
code_r0x007469f4:
  FUN_00414480(local_20);
  return;
}

