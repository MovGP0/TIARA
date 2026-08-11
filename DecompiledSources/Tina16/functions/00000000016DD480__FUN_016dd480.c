/* Ghidra address: 016dd480 */
/* Ghidra symbol: FUN_016dd480 */


double FUN_016dd480(longlong param_1,char param_2,double param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  undefined8 local_c0;
  double local_b8;
  double local_b0 [17];
  
  if (param_2 == '\x06') {
    uVar1 = *param_4;
    uVar2 = param_4[1];
    local_b0[0] = (double)param_4[2];
    dVar3 = (double)param_4[3];
    dVar4 = (double)param_4[4];
    dVar11 = (double)param_4[5];
    uVar7 = FUN_0040c840(param_4[6]);
    uVar5 = FUN_0040c840(param_4[7]);
    cVar6 = FUN_0040c840(param_4[8]);
    uVar8 = FUN_0040c840(param_4[9]);
    local_c0 = 0;
    local_b8 = 0.0;
    dVar12 = 0.0;
    if (local_b0[0] <= param_3) {
      if (cVar6 == '\0') {
        iVar9 = 0;
        dVar12 = 0.0;
        if (uVar7 < 0x80000000) {
          iVar10 = uVar7 + 1;
          dVar12 = 0.0;
          do {
            cVar6 = FUN_0129de90(uVar1,uVar2,0,uVar7,iVar9,uVar5,param_1 + 0x5d8,&local_c0,&local_b8
                                );
            if (cVar6 != '\0') {
              FUN_00c43c40(dVar3 + ((double)(-iVar9 * (iVar9 + -1)) * 3.141592653589793) /
                                   (double)(int)uVar7 +
                           local_b8 * 6.283185307179586 * (param_3 - local_b0[0]),0x401921fb54442d18
                          );
              dVar11 = (double)FUN_0040bdd0();
              dVar12 = dVar12 + dVar4 * dVar11;
            }
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else if (cVar6 == '\x01') {
        dVar12 = dVar4;
        if (local_b0[0] + dVar11 <= param_3) {
          dVar12 = 0.0;
        }
      }
      else {
        local_b8 = (double)FUN_016dd290(param_3,local_b0[0],uVar1,uVar2,uVar7,uVar8,uVar5,
                                        param_4 + 10,param_4 + 0xb,param_4 + 0xc,local_b0);
        FUN_00c43c40(dVar3 + 0.0 + local_b8 * 6.283185307179586 * (param_3 - local_b0[0]),
                     0x401921fb54442d18);
        dVar12 = (double)FUN_0040bdd0();
        dVar12 = dVar4 * dVar12 + 0.0;
      }
    }
  }
  else {
    dVar12 = 0.0;
  }
  return dVar12;
}

