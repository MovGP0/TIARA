/* Ghidra address: 01d5a280 */
/* Ghidra symbol: FUN_01d5a280 */


void FUN_01d5a280(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  undefined8 in_RAX;
  bool bVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
        uVar3 = FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3],0,0);
      }
      else if ((*(byte *)(param_3 + 0x88) & 0x10) == 0) {
        uVar3 = *(undefined8 *)(param_1 + 8);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 8);
      }
      dVar2 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x01',1,0);
      FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],0);
      uVar3 = FUN_00b90620(uVar3,0x406be00000000000);
      dVar4 = (double)FUN_00b90650(uVar3,0x4080580000000000);
      dVar5 = (double)FUN_00c42a20(*(double *)(param_1 + 0x18) * (1.0 / dVar4 - 0.00335401643468053)
                                  );
      dVar5 = *(double *)(param_1 + 0x10) * dVar5;
      dVar6 = dVar5 * dVar2;
      dVar7 = (-dVar5 * *(double *)(param_1 + 0x18)) / (dVar4 * dVar4);
      FUN_016ed320(param_2,*param_1 + '\x01',dVar6 - (dVar7 * dVar4 + dVar5) * dVar2,dVar5,0);
      FUN_016ed220(param_2,*param_1 + '\x06',dVar7 * dVar2,0);
      FUN_016ed320(param_2,*param_1 + '\x02',(dVar6 * dVar2 - dVar2 * dVar6) - dVar6 * dVar2,0,0);
      FUN_016ed220(param_2,*param_1 + '\a',dVar2,0);
      FUN_016ed220(param_2,*param_1 + '\b',dVar6,0);
    }
    else {
      FUN_016ee8d0(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3],0,0x4072c26666666666,0);
    }
  }
  return;
}

