/* Ghidra address: 01863310 */
/* Ghidra symbol: FUN_01863310 */


ulonglong FUN_01863310(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  char local_2b;
  char local_2a;
  undefined1 local_29;
  
  uVar6 = 0;
  lVar2 = (**(code **)*param_2)(param_2);
  lVar3 = FUN_004b6da0(param_2);
  if (5 < lVar2 - lVar3) {
    uVar4 = FUN_004b6da0(param_2);
    (**(code **)(*param_2 + 0x18))(param_2,&local_2e,6);
    uVar5 = uVar4;
    FUN_004b6dc0(param_2,uVar4);
    cVar1 = FUN_00409ed0(local_2e);
    if (cVar1 == 'G') {
      cVar1 = FUN_00409ed0(local_2d);
      if (cVar1 == 'I') {
        cVar1 = FUN_00409ed0(local_2c);
        if ((cVar1 == 'F') && (local_2b == '8')) {
          if ((byte)(local_2a - 0x30U) < 0x10) {
            bVar7 = ((int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),1) << (local_2a - 0x30U & 0x1f)
                    & 0x280U) != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            cVar1 = FUN_00409ed0(local_29);
            if (cVar1 == 'A') {
              uVar6 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
              goto LAB_018633e9;
            }
          }
        }
      }
    }
    uVar6 = 0;
  }
LAB_018633e9:
  return uVar6 & 0xffffffff;
}

