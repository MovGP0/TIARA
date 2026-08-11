/* Ghidra address: 0080c7f0 */
/* Ghidra symbol: FUN_0080c7f0 */


undefined8 FUN_0080c7f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_30;
  int local_2c;
  
  uVar6 = 0;
  uVar5 = 0;
  if ((0xff < *(uint *)(param_2 + 1)) && (*(uint *)(param_2 + 1) < 0x10a)) {
    lVar3 = thunk_FUN_041d93e9();
    if (lVar3 == 0) {
      lVar4 = *param_2;
      lVar3 = *(longlong *)(param_1 + 0xa8);
      if ((lVar3 == 0) || (lVar4 != *(longlong *)(lVar3 + 0x698))) {
        while( true ) {
          cVar1 = FUN_00648630(lVar4);
          if ((cVar1 != '\0') || (lVar4 == 0)) break;
          lVar4 = thunk_FUN_03de17fb(lVar4);
        }
        if (lVar4 == 0) {
          lVar4 = *param_2;
        }
      }
      else {
        lVar4 = FUN_0065b870(lVar3);
      }
      iVar2 = thunk_FUN_039bb6fb(lVar4);
      if (iVar2 == 0) {
        lVar3 = thunk_FUN_03cb881f(lVar4,(int)param_2[1] + 0xbc00,param_2[2],param_2[3]);
        uVar6 = uVar5;
        if (lVar3 != 0) {
          uVar6 = 1;
        }
      }
      else {
        lVar3 = thunk_FUN_041b2403(lVar4,(int)param_2[1] + 0xbc00,param_2[2],param_2[3]);
        if (lVar3 != 0) {
          uVar6 = 1;
        }
      }
    }
    else {
      thunk_FUN_039b6ab1(lVar3,&local_2c);
      thunk_FUN_039b6ab1(*(undefined8 *)(param_1 + 0x2d0),&local_30);
      uVar6 = uVar5;
      if (local_2c == local_30) {
        lVar3 = thunk_FUN_041b2403(lVar3,(int)param_2[1] + 0xbc00,param_2[2],param_2[3]);
        if (lVar3 != 0) {
          uVar6 = 1;
        }
      }
    }
  }
  return uVar6;
}

