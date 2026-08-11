/* Ghidra address: 00f5bb10 */
/* Ghidra symbol: FUN_00f5bb10 */


void FUN_00f5bb10(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 in_RAX;
  longlong lVar2;
  bool bVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double local_50;
  undefined1 local_48 [8];
  double local_40 [3];
  
  cVar1 = (char)param_4;
  if ((byte)(cVar1 - 8U) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (cVar1 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    if (cVar1 == '\f') {
      if (*(double *)(param_1 + 0x18) <= 0.0) {
        uVar5 = 0;
      }
      else {
        dVar4 = (double)FUN_016ed770(param_3);
        uVar5 = FUN_0040c760(((dVar4 + 273.15) * 5.5224904e-23) / *(double *)(param_1 + 0x18));
      }
      FUN_016ed220(param_2,*(char *)(param_1 + 1) + '\x04',uVar5,0);
    }
  }
  else if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
    FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*(char *)(param_1 + 1) + '\x02',1,0);
    dVar4 = (double)FUN_0040c850();
    dVar6 = (*(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x30)) / 2.0;
    FUN_00daab50(param_2,param_3,*(undefined1 *)(param_1 + 0x38),param_4,dVar4,dVar6 - 1e-09,
                 dVar6 + 1e-09,(*(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x30)) / 2.0,0,
                 0x4014000000000000,0,0,local_48,local_40,&local_50);
    lVar2 = FUN_0041f930();
    *(undefined8 *)(lVar2 + 0x280) = 0x4014000000000000;
    local_40[0] = (double)(**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x18))
                                    (*(longlong *)(param_1 + 8),param_2,param_3,local_40[0],cVar1);
    FUN_016ed320(param_2,*(char *)(param_1 + 1) + '\x03',local_40[0] - local_50 * dVar4,0,0);
    FUN_016ed220(param_2,*(char *)(param_1 + 1) + '\x06',local_50,0);
  }
  return;
}

