/* Ghidra address: 01d00110 */
/* Ghidra symbol: FUN_01d00110 */


void FUN_01d00110(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined1 auStack_b8 [45];
  byte local_8b;
  byte local_8a;
  byte abStack_89 [97];
  
  pbVar4 = &local_8b;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 8;
  }
  *(undefined2 *)pbVar4 = *(undefined2 *)param_3;
  pbVar4[2] = *(byte *)((longlong)param_3 + 2);
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = 0;
  iVar5 = local_8a + 1;
  pbVar4 = abStack_89 + 1;
  do {
    if (*pbVar4 == 0) {
      cVar1 = FUN_01d000e0(auStack_b8,local_8b);
      if (cVar1 == '\0') {
        cVar1 = FUN_01d3d470(local_8b);
        if (cVar1 == '\0') {
          cVar1 = FUN_01d3d450(local_8b);
          if (cVar1 == '\0') {
            cVar1 = FUN_01d3d490(local_8b);
            if (cVar1 != '\0') {
              if ((uVar3 == 5) || (uVar3 == 4)) {
                param_2[1] = 1;
              }
              if ((((uVar3 == 0) || (uVar3 == 2)) || (uVar3 == 1)) || ((uVar3 == 6 || (uVar3 == 3)))
                 ) {
                *param_2 = 1;
              }
            }
          }
          else {
            if (uVar3 == 4) {
              param_2[1] = 1;
            }
            if (((uVar3 == 0) || (uVar3 == 1)) || ((uVar3 == 5 || (uVar3 == 2)))) {
              *param_2 = 1;
            }
          }
        }
        else {
          if ((uVar3 == 4) || (uVar3 == 3)) {
            param_2[1] = 1;
          }
          if ((((uVar3 == 0) || (uVar3 == 1)) || (uVar3 == 5)) || (uVar3 == 2)) {
            *param_2 = 1;
          }
        }
      }
      else if (uVar3 == local_8a) {
        param_2[1] = 1;
      }
      else {
        *param_2 = 1;
      }
    }
    uVar3 = uVar3 + 1;
    pbVar4 = pbVar4 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

