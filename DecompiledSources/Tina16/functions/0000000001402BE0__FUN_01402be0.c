/* Ghidra address: 01402be0 */
/* Ghidra symbol: FUN_01402be0 */


void FUN_01402be0(longlong param_1)

{
  undefined2 uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330 [2];
  undefined1 local_320 [760];
  
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_330[0] = 0;
  cVar2 = FUN_00b0a890(*(undefined8 *)(param_1 + 0x790));
  if (cVar2 == '\0') {
    FUN_00441920(local_330,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    FUN_00724380(*(undefined8 *)(param_1 + 0x860),local_330[0]);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x860) + 0xa8))(*(longlong **)(param_1 + 0x860));
    if (cVar2 != '\0') {
      FUN_00724270(*(undefined8 *)(param_1 + 0x860),&local_338);
      FUN_0040cf10(local_320,local_338,0);
      FUN_00409900();
      FUN_0040ca00();
      FUN_00409900();
      uVar1 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
      *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
      iVar5 = *(int *)(param_1 + 0x894) / 2;
      iVar4 = 0;
      if (-1 < iVar5 + -1) {
        do {
          FUN_00b8fd60(&local_340,
                       *(undefined8 *)(*(longlong *)(param_1 + 0x8b8) + (longlong)(iVar4 * 2) * 8),6
                       ,0,1);
          uVar3 = FUN_0040f200(local_320,local_340);
          uVar3 = FUN_0040f3d0(uVar3,0x2c);
          FUN_00b8fd60(&local_348,
                       *(undefined8 *)
                        (*(longlong *)(param_1 + 0x8b8) + (longlong)(iVar4 * 2 + 1) * 8),6,0,1);
          uVar3 = FUN_0040f200(uVar3,local_348);
          FUN_0040f590(uVar3);
          FUN_00409900();
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = uVar1;
      FUN_0040d150(local_320);
      FUN_00409900();
    }
  }
  FUN_00414560(&local_348,2);
  FUN_00414480(&local_338);
  FUN_00414480(local_330);
  return;
}

