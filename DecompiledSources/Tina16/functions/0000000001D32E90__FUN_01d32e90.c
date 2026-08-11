/* Ghidra address: 01d32e90 */
/* Ghidra symbol: FUN_01d32e90 */


void FUN_01d32e90(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char local_51;
  undefined4 local_50;
  short local_4a [13];
  short local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  
  bVar6 = false;
  while (!bVar6) {
    cVar1 = FUN_01d30db0(*param_2);
    if (cVar1 != '\0') break;
    iVar3 = FUN_01d31a40(*param_2);
    if (iVar3 != 0) break;
    FUN_01d30e90(*param_2,&local_30);
    cVar1 = FUN_01cefe50(local_30,local_2e,&local_51);
    if (local_51 == '\0') {
      if (cVar1 == '\0') {
        local_4a[0] = local_30;
        cVar1 = (**(code **)(*param_1 + 0x40))(param_1,local_4a,&local_50);
        if (cVar1 != '\0') {
          lVar4 = FUN_00b94e60(param_1,local_50);
          if (*(longlong *)(lVar4 + 2) != 0) {
            lVar4 = FUN_00b94e60(param_1,local_50);
            (**(code **)(lVar4 + 2))(param_2,local_30,local_2e,local_2c);
          }
        }
        bVar6 = local_4a[0] == 0xff;
        lVar4 = FUN_004b6da0(*(undefined8 *)(*param_2 + 0x10));
        lVar5 = (**(code **)**(undefined8 **)(*param_2 + 0x10))(*(undefined8 **)(*param_2 + 0x10));
        uVar2 = FUN_0040c770((double)(lVar4 * 100) / (double)lVar5);
        if (*(char *)(*param_2 + 9) != '\0') {
          if (*(longlong *)PTR_DAT_02004080 == 0) {
            FUN_006e6920(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x1548),uVar2);
          }
          else {
            FUN_006e6920(*(undefined8 *)(*(longlong *)PTR_DAT_02004080 + 0x6d0),uVar2);
          }
        }
      }
      else {
        FUN_01d31a70(*param_2,0x1005);
      }
    }
    else {
      FUN_01d30df0(*param_2);
    }
  }
  FUN_01d30fd0(*param_2);
  return;
}

